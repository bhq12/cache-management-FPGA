----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:10:36 10/05/2016 
-- Design Name: 
-- Module Name:    cache_controller_frog - Behavioral 
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

entity cache_controller_frog is
	port(clk : in std_logic; 
	data_in, data_from_cache, data_from_memory: in std_logic_vector(7 downto 0);
	operation : in std_logic_vector(2 downto 0);
	data_to_device : out std_logic_vector(7 downto 0);
	data_result : out std_logic_vector(7 downto 0);
	address_in : in unsigned(7 downto 0);
	address_out : out unsigned(7 downto 0);
	rw_out : out std_ulogic;
	hm : in std_ulogic; --hit/miss
	em, ec : out std_ulogic := '0'; -- enable main/cache
	read_ready : in std_ulogic);
end cache_controller_frog;

architecture Behavioral of cache_controller_frog is

--component cache_ram 
--	port(address: in unsigned(7 downto 0);
--	data_in: in std_logic_vector(7 downto 0);
--	data_out: out std_logic_vector(7 downto 0);
--	enable, rw: in std_ulogic;
--	hit_miss, output_ready: out std_ulogic);
--end component;



begin

--	CM1: cache_ram port map (address_out, data_to_device, data_from_device, ec, rw_out, hm, read_ready);

	process (clk)
	begin

		
		address_out <= address_in;
		data_to_device <= data_in;
	   
		if hm = '0' then
				data_result <= data_from_cache;
      end if;
		
--		if operation = "11" then
--
--		end
--		
		if operation = "001" then
			ec <= '1';
			if hm = '0' then
				em <= '0';
			end if;
			rw_out <= '1'; -- read
		end if;
		
		if operation = "010" then
			ec <= '1';
		   em <= '1';
			rw_out <= '0'; -- write
		end if;
		
		if hm = '1' then
			--miss has occurred
			data_result <= data_from_memory;
			em <= '1';--enable main memory
			ec <= '0';--disable cache
			rw_out <= '1';
		end if;
		
		if read_ready = '1' then
			data_to_device <= data_from_memory;
			rw_out <= '0'; --write
			ec <= '1';
			em <= '0';
		end if;
		
	end process;
end Behavioral;