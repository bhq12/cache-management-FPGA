----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:53:16 10/08/2016 
-- Design Name: 
-- Module Name:    cache_ram_two_way - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all; 

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity cache_ram_two_way is
	port(
	clk : in std_logic; 
	address: in unsigned(7 downto 0);
	data_in: in std_logic_vector(7 downto 0);
	data_out: out std_logic_vector(7 downto 0);
	enable, rw: in std_ulogic;
	hit_miss: out std_ulogic := '0');
end cache_ram_two_way;

architecture Behavioral of cache_ram_two_way is
	type data_type is array (0 to 2**4-1) of --construct cache memory
		std_logic_vector(7 downto 0);
	signal way0: data_type:= (others => (others => '0'));
	signal way1: data_type:= (others => (others => '0'));
	
	type tag_type is array (0 to 2**4-1) of --construct tag memory
		std_logic_vector(3 downto 0);
	signal way0_tag: tag_type:= (others => (others => '0'));
	signal way1_tag: tag_type:= (others => (others => '0'));
	
	type lru_way_type is array (0 to 2**4-1) of --construct lru replacement management
		std_logic;
	signal lru_way: lru_way_type := (others => '0');

	signal cache_cell: unsigned(3 downto 0);
	signal tag_in: unsigned(3 downto 0);
	
	signal count : std_logic_vector(1 downto 0) := (others => '0');
	
	signal selected_way : std_ulogic := '0'; --0 or 1 for the selected way
begin
	process (clk)
	begin
		--data_out <= (others => 'Z'); -- chip is not selected
		cache_cell <= address(7 downto 4); --first half of address
		tag_in <= address(3 downto 0); --second hald of address
		
		if enable = '1' then
			
			if way0_tag(conv_integer(cache_cell)) = conv_std_logic_vector(tag_in, 4) or way1_tag(conv_integer(cache_cell)) = conv_std_logic_vector(tag_in, 4) then 
				hit_miss <= '0';
				
				if rw = '0' then -- write on hit
					if selected_way = '0' then --overwrite way 0 with this data
						way0(conv_integer(cache_cell)) <= data_in;
						way0_tag(conv_integer(cache_cell)) <= conv_std_logic_vector(tag_in, 4);
					else --overwrite way 1 with way 0 and then overwrite way 0 with this data
						way1(conv_integer(cache_cell)) <= data_in;
						way1_tag(conv_integer(cache_cell)) <= conv_std_logic_vector(tag_in, 4);
					end if;
				--wait for 0 ns;
				end if;
				
				if rw = '1' then -- read on hit but only output on the second clock cycle
					if selected_way = '0' and count = "01" then
						data_out <= way0(conv_integer(cache_cell));
					elsif selected_way = '1' and count = "01" then
						data_out <= way1(conv_integer(cache_cell));
					end if;
				--wait for 0 ns;
				end if;
				
				lru_way(conv_integer(cache_cell)) <= not selected_way; --there was a cache hit so the LRU mananger needs to be updated.
				
			else
				if rw = '0' then -- write
					if lru_way(conv_integer(cache_cell)) = '0' then
						way0(conv_integer(cache_cell)) <= data_in;
						way0_tag(conv_integer(cache_cell)) <= conv_std_logic_vector(tag_in, 4);
						lru_way(conv_integer(cache_cell)) <= '1';
					else
						way1(conv_integer(cache_cell)) <= data_in;
						way1_tag(conv_integer(cache_cell)) <= conv_std_logic_vector(tag_in, 4);
						lru_way(conv_integer(cache_cell)) <= '0';
					end if;
					
				--wait for 0 ns;
				else
					hit_miss <= '1'; --only miss on a read. write will always do something whether there was a hit or not
				end if;
			end if;
		else
			data_out <= (others => 'Z');
		end if;
	--wait on enable, rw, address;
end process;

process (clk) --counts the clock cycles while enable is high
begin
	if enable = '1' then
		if way0_tag(conv_integer(cache_cell)) = conv_std_logic_vector(tag_in, 4) then
			selected_way <= '0';
		else
			selected_way <= '1'; --select the way that we have a hit on
		end if;
		if count = "00" then
			count <= "01";
		elsif count = "01" then
			count <= "10";
		elsif count = "10" then
			count <= "11";
		else
			count <= "00";
		end if;
	else
		count <= "00";
	end if;
end process;

end Behavioral;

