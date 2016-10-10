--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   01:21:56 10/11/2016
-- Design Name:   
-- Module Name:   P:/My Documents/cache-management-FPGA/cache_controller/cache_system_two_way_tb.vhd
-- Project Name:  cache_controller
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cache_system_two_way
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
 
ENTITY cache_system_two_way_tb IS
END cache_system_two_way_tb;
 
ARCHITECTURE behavior OF cache_system_two_way_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cache_system_two_way
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
   uut: cache_system_two_way PORT MAP (
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
 

   -- Stimulus process
   stim_proc: process
	
	procedure write_to(
		ADDR : in unsigned(7 downto 0);
		DATA : in std_logic_vector(7 downto 0) ) is
	begin			
		address_in <= ADDR;
		data_in <= DATA;
		operation <= "010";
		wait for 10 ns;
		operation <= "000";
		wait for 10 ns;
	end write_to;
	
	procedure read_from(
		ADDR_IN : in unsigned(7 downto 0) ) is
	begin
		address_in <= ADDR_IN;
		data_in <= "00000000";
		operation <= "001";
		wait for 10 ns;	
	end read_from;
	
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 


		-- Testing environment setup phase
		-- Initialise the cache manager
		operation <= "100";
		wait for 10 ns;	
		
		report "Starting testing environment setup";
		write_to("00000001","00101010"); --write data into first line of cache for hit test
		write_to("00010001","00101000"); --write data into second line for miss test
		write_to("00010111","00101001"); --write data into second line so previous write is no longer cached.
				
-- Case: Cache read hit // TODO: Investigate this failing
		read_from("00000001");
		assert data_out = "00101010" report "Case: Cache read hit error: expected 00101010";
		operation <= "000";
		wait for 10 ns;	

-- Case: Cache miss prompts read from main memory
		read_from("00010001");
		assert data_out = "00101000" report "Case: Cache miss prompts read from main memory error: expected 00101000";
		operation <= "000";
		wait for 10 ns;	

-- Case: Cache miss prompts cache write
		read_from("00010001");
		assert data_out = "00101000" report "Case: Cache read hit error: expected 00101000";
--assert hit_miss_signal = '0' report "Case: Cache read hit error: expected 0";
		operation <= "000";
		wait for 10 ns;	

report "Finished running all unit tests";

      wait;
   end process;

END;
