----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:06:51 10/05/2016 
-- Design Name: 
-- Module Name:    simple_ram - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

--code modified from http://people.sabanciuniv.edu/erkays/el310/MemoryModels.pdf

entity simple_ram is
	port(clk : in std_logic; 
	address: in unsigned(7 downto 0);
	data_in: in std_logic_vector(7 downto 0);
	data_out : out std_logic_vector(7 downto 0);
	write_to_cache: out std_ulogic := '0';
	enable, rw: in std_ulogic);
end simple_ram;

architecture Behavioral of simple_ram is
	type ram_type is array (0 to 2**8-1) of
		std_logic_vector(7 downto 0);
	signal ram1: ram_type:= (others => (others => '0'));
begin
	process(clk)
	begin
		--data_out <= (others => 'Z'); -- chip is not selected
		if enable = '1' then
			if rw = '0' then -- write
				ram1(conv_integer(address)) <= data_in;
				--wait for 0 ns;
			end if;
			if rw = '1' then -- read
				data_out <= ram1(conv_integer(address));
				write_to_cache <= '1';
				--wait for 0 ns;
			end if;
		else
	
			--data_out <= (others => '0');
		end if;
	--wait on enable, rw, address;
end process;
end Behavioral;

