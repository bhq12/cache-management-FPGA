--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:27:32 10/10/2016
-- Design Name:   
-- Module Name:   P:/cache-management-FPGA/cache_controller/cache_system_tb.vhd
-- Project Name:  cache_controller
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cache_system
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all; 
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY cache_system_tb IS
END cache_system_tb;
 
ARCHITECTURE behavior OF cache_system_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cache_system
    PORT(
         clk : IN  std_logic;
         data_in : IN  std_logic_vector(7 downto 0);
         operation : IN  std_logic_vector(2 downto 0);
         data_out : OUT  std_logic_vector(7 downto 0);
         address_in : IN  unsigned(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal operation : std_logic_vector(2 downto 0) := (others => '0');
   signal address_in : unsigned(7 downto 0) := (others => '0');

 	--Outputs
   signal data_out : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cache_system PORT MAP (
          clk => clk,
          data_in => data_in,
          operation => operation,
          data_out => data_out,
          address_in => address_in
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

--	impure function write_to (address_in_var : unsigned(7 downto 0), data_in_var : std_logic_vector(7 downto 0)) return std_ulogic is
--	begin
--		address_in <= address_in_var;
--		data_in <= data_in_var;
--		operation <= "010";
--		return '1';
--	end write_to;

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		
		-- Start the testbench
		operation <= "100";
		wait for 10 ns;	

-- Unit test enivronment setup
		address_in <= "00000001"; --write data into first line of cache for hit test
		data_in <= "00101010";
		operation <= "010";
		
		wait for 10 ns;

		address_in <= "00010001"; --write data into second line for miss test
		data_in <= "00101000";
		operation <= "010";
		
		wait for 10 ns;
		
		address_in <= "00010111"; --write data into second line so previous write is no longer cached.
		data_in <= "00101001";
		operation <= "010";
		
		wait for 10 ns;		

		operation <= "000";
		wait for 10 ns;		
-- Case: Cache read hit 


		address_in <= "00000001";
		data_in <= "00000000";
		operation <= "001";
		assert data_out = "00101010" report "Case: Cache read hit error: expected 00101010";
		
		wait for 10 ns;
		
		operation <= "000";

		wait for 10 ns;

-- Case: Cache miss prompts read from main memory
		address_in <= "00010001";
		data_in <= "00000000";
		operation <= "001";
		assert data_out = "00101000" report "Case: Cache miss prompts read from main memory error: expected 00101000";
		
		wait for 10 ns;

-- Case: Cache miss prompts cache write
		address_in <= "00010001";
		data_in <= "00000000";
		operation <= "001";
assert data_out = "00101000" report "Case: Cache read hit error: expected 00101000";
--assert hit_miss_signal = '0' report "Case: Cache read hit error: expected 0";

      wait;
   end process;

END;
