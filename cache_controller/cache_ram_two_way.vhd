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
	hit_miss, output_ready: out std_ulogic := '0');
end cache_ram_two_way;

architecture Behavioral of cache_ram_two_way is
	type data_type is array (0 to 2**4-1) of
		std_logic_vector(7 downto 0);
	signal way0: data_type:= (others => (others => '0'));
	signal way1: data_type:= (others => (others => '0'));
	
	type tag_type is array (0 to 2**4-1) of
		std_logic_vector(3 downto 0);
	signal way0_tag: tag_type:= (others => (others => '0'));
	signal way1_tag: tag_type:= (others => (others => '0'));

	signal cache_cell: unsigned(3 downto 0);
	signal tag_in: unsigned(3 downto 0);
	
	signal selected_way : std_ulogic; --0 or 1 for the selected way
begin
	process (clk)
	begin
		data_out <= (others => 'Z'); -- chip is not selected
		if (rising_edge(enable)) then
			cache_cell <= address(7 downto 4); --first half of address
			tag_in <= address(3 downto 0); --second hald of address
			
			if way0_tag(conv_integer(cache_cell)) = conv_std_logic_vector(tag_in, 4) or way1_tag(conv_integer(cache_cell)) = conv_std_logic_vector(tag_in, 4) then 
				hit_miss <= '0';
				
				
				if way0_tag(conv_integer(cache_cell)) = conv_std_logic_vector(tag_in, 4) then
					selected_way <= '0';
				else
					selected_way <= '1'; --select the way that we have a hit on
				end if;
				
				if rw = '0' then -- write
					if selected_way = '0' then --overwrite way 0 with this data
						way0(conv_integer(cache_cell)) <= data_in;
						way0_tag(conv_integer(cache_cell)) <= conv_std_logic_vector(tag_in, 4);
					else --overwrite way 1 with way 0 and then overwrite way 0 with this data
						way1(conv_integer(cache_cell)) <= way0(conv_integer(cache_cell));
						way1_tag(conv_integer(cache_cell)) <= way0_tag(conv_integer(cache_cell));
						way0(conv_integer(cache_cell)) <= data_in;
						way0_tag(conv_integer(cache_cell)) <= conv_std_logic_vector(tag_in, 4);
					end if;
				--wait for 0 ns;
				end if;
				
				if rw = '1' then -- read
					if selected_way = '0' then
						data_out <= way0(conv_integer(cache_cell));
					else
						data_out <= way1(conv_integer(cache_cell));
					end if;
				--wait for 0 ns;
				end if;
				
			else
			if rw = '0' then -- write
				way1(conv_integer(cache_cell)) <= way0(conv_integer(cache_cell));
				way1_tag(conv_integer(cache_cell)) <= way0_tag(conv_integer(cache_cell));
				way0(conv_integer(cache_cell)) <= data_in;
				way0_tag(conv_integer(cache_cell)) <= conv_std_logic_vector(tag_in, 4);
				--wait for 0 ns;
			end if;
				hit_miss <= '1';
			end if;
		else
			data_out <= (others => 'Z');
		end if;
	--wait on enable, rw, address;
end process;


end Behavioral;

