--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:00:02 10/07/2016
-- Design Name:   
-- Module Name:   P:/My Documents/cache-management-FPGA/cache_controller/cache_controller_tb.vhd
-- Project Name:  cache_controller
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cache_controller_frog
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
 
ENTITY cache_controller_tb IS
END cache_controller_tb;
 
ARCHITECTURE behavior OF cache_controller_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cache_controller_frog
    PORT(
         clk : IN  std_logic;
         data_in : IN  std_logic_vector(7 downto 0);
         data_from_device : IN  std_logic_vector(7 downto 0);
         address_in : IN  unsigned(7 downto 0);
         operation : IN  std_logic_vector(2 downto 0);
         data_to_device : OUT  std_logic_vector(7 downto 0);
         data_result : OUT  std_logic_vector(7 downto 0);
         address_out : OUT  unsigned(7 downto 0);
         rw_out : OUT  std_logic;
         hm : IN  std_logic;
         em : OUT  std_logic;
         ec : OUT  std_logic;
         read_ready : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal data_from_device : std_logic_vector(7 downto 0) := (others => '0');
   signal address_in : unsigned(7 downto 0) := (others => '0');
   signal operation : std_logic_vector(2 downto 0) := (others => '0');
   signal hm : std_logic := '0';
   signal read_ready : std_logic := '0';

 	--Outputs
   signal data_to_device : std_logic_vector(7 downto 0);
   signal data_result : std_logic_vector(7 downto 0);
   signal address_out : unsigned(7 downto 0);
   signal rw_out : std_logic;
   signal em : std_logic;
   signal ec : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cache_controller_frog PORT MAP (
          clk => clk,
          data_in => data_in,
          data_from_device => data_from_device,
          address_in => address_in,
          operation => operation,
          data_to_device => data_to_device,
          data_result => data_result,
          address_out => address_out,
          rw_out => rw_out,
          hm => hm,
          em => em,
          ec => ec,
          read_ready => read_ready
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
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

		data_in <="10101010";
		address_in <="01010101";
		operation <= "100";
		
		wait for 10 ns;
		
		operation <= "010";
		wait for 1 ns;
		operation <= "000";
		data_in <="00000000";
		
		operation <= "001";
		wait for 10 ns;
		hm <= '1';
		wait for 10 ns;
		data_from_device <= "00101000";
		wait for 10 ns;
		read_ready <= '1';


      wait;
   end process;

END;
