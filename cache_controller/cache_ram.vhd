----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:54:23 10/05/2016 
-- Design Name: 
-- Module Name:    cache_ram - Behavioral 
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

--code modified from http://people.sabanciuniv.edu/erkays/el310/MemoryModels.pdf

entity cache_ram is
	port(
	clk : in std_logic; 
	address: in unsigned(7 downto 0);
	data_in: in std_logic_vector(7 downto 0);
	data_out: out std_logic_vector(7 downto 0);
	enable, rw: in std_ulogic;
	hit_miss: out std_ulogic := '0');
end cache_ram;

architecture Behavioral of cache_ram is
	type data_type is array (0 to 2**4-1) of
		std_logic_vector(7 downto 0);
	signal cache: data_type:= (others => (others => '0'));
	
	type tag_type is array (0 to 2**4-1) of
		std_logic_vector(3 downto 0);
	signal tag: tag_type:= (others => (others => '0'));

	signal cache_cell: unsigned(3 downto 0);
	signal tag_in: unsigned(3 downto 0);
begin
	process (clk)
	begin
		if enable = '1' then
			cache_cell <= address(7 downto 4); --first half of address
			tag_in <= address(3 downto 0); --second hald of address
			if rw = '1' then -- read
				if tag(conv_integer(cache_cell)) = conv_std_logic_vector(tag_in, 4) then 
					hit_miss <= '0';
					
						data_out <= cache(conv_integer(cache_cell));
					--wait for 0 ns;
				else
					hit_miss <= '1';
				end if;
			end if;			
			if rw = '0' then -- write
					cache(conv_integer(cache_cell)) <= data_in;
					tag(conv_integer(cache_cell)) <= conv_std_logic_vector(tag_in, 4);
				--wait for 0 ns;
			end if;
		end if;
	--wait on enable, rw, address;
end process;
end Behavioral;