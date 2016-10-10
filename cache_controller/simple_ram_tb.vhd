--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:05:06 10/07/2016
-- Design Name:   
-- Module Name:   P:/My Documents/cache-management-FPGA/cache_controller/simple_ram_tb.vhd
-- Project Name:  cache_controller
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: simple_ram
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
 
ENTITY simple_ram_tb IS
END simple_ram_tb;
 
ARCHITECTURE behavior OF simple_ram_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT simple_ram
    PORT(
			clk : IN  std_logic;
         address : IN  unsigned(7 downto 0);
         data_in : IN  std_logic_vector(7 downto 0);
         data_out : OUT  std_logic_vector(7 downto 0);
         enable : IN  std_logic;
         rw : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
	signal clk : std_logic := '0';
   signal address : unsigned(7 downto 0) := (others => '0');
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal enable : std_logic := '0';
   signal rw : std_logic := '0';

 	--Outputs
   signal data_out : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
    -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: simple_ram PORT MAP (
			 clk => clk,
          address => address,
          data_in => data_in,
          data_out => data_out,
          enable => enable,
          rw => rw
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
      wait for 10 ns;	


      -- insert stimulus here 
		
		address <= "00000001";
		data_in <= "00001111";
		rw <= '0';
		
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		rw <= '0';
		address <= "11111111";
		data_in <= "11110000";
		
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;

		rw <= '1';
		address <= "00000000";
		
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "00000001";
		
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;

      wait;
   end process;

END;
