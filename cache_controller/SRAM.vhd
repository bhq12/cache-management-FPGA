----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:27:58 10/05/2016 
-- Design Name: 
-- Module Name:    SRAM - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SRAM is
    Port ( address_in : in  STD_LOGIC_VECTOR (7 downto 0);
           memory_out : out  STD_LOGIC_VECTOR (7 downto 0);
           data_in : in  STD_LOGIC_VECTOR (7 downto 0);
           read_write : in  STD_LOGIC );
end SRAM;

architecture Behavioral of SRAM is

begin

MAIN_MEMORY:process
	
	begin
	--define the memory block
	--define the behaviour for memory read and writes
	end process

CACHE_MEMORY:process
	begin
	--define the memory block
	--define the process for cache read and writes
	end process
	
CACHE_CONTROLLER:process
	begin
	--define read/write systems
	--define the system for checking if some data is in the cache
	end process

end Behavioral;

