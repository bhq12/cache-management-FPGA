-- TestBench Template 

  LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all; 

  ENTITY cache_ram_two_way_tb IS
  END cache_ram_two_way_tb;

  ARCHITECTURE behavior OF cache_ram_two_way_tb IS 

  -- Component Declaration
          COMPONENT cache_ram_two_way
    PORT(
			clk : IN  std_logic;
         address : IN  unsigned(7 downto 0);
         data_in : IN  std_logic_vector(7 downto 0);
         data_out : OUT  std_logic_vector(7 downto 0);
         enable : IN  std_logic;
         rw : IN  std_logic;
         hit_miss : OUT  std_logic);
	END COMPONENT;
          

   --Inputs
	signal clk : std_logic := '0';
   signal address : unsigned(7 downto 0) := (others => '0');
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal enable : std_logic := '0';
   signal rw : std_logic := '0';

 	--Outputs
   signal data_out : std_logic_vector(7 downto 0);
   signal hit_miss : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cache_ram_two_way PORT MAP (
			 clk => clk,
          address => address,
          data_in => data_in,
          data_out => data_out,
          enable => enable,
          rw => rw,
          hit_miss => hit_miss);

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
			address <= ADDR;
			data_in <= DATA;
			rw <= '0';
			
			wait for 10 ns;
			enable <= '1';
			wait for 10 ns;
			enable <= '0';
			wait for 10 ns;
	end write_to;
	
	procedure read_from(
		ADDR_IN : in unsigned(7 downto 0) ) is
		begin
			address <= ADDR_IN;
			data_in <= "00000000";
			rw <= '1';
			
			wait for 10 ns;
			enable <= '1';
			wait for 10 ns;
			enable <= '0';
			wait for 10 ns;
	end read_from;

	
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      -- insert stimulus here 

		address <= "00010000"; --write 0xf0 to 0x10 
		data_in <= "11110000";
		rw <= '0';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "00010001"; --write 0x0f to 0x11
		data_in <= "00001111";
		rw <= '0';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "11110011"; --write 0xff to 0xf3
		data_in <= "11111111";
		rw <= '0';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "00010000"; --read 0x10
		data_in <= "00000000";
		rw <= '1';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "00010001"; --read 0x11
		data_in <= "00000000";
		rw <= '1';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "11111111"; --red 0xff (miss)
		data_in <= "00000000";
		rw <= '1';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "11110011"; --read 0xf3
		data_in <= "00000000";
		rw <= '1';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "11110111"; --write 0xaa to 0xf7
		data_in <= "10101010";
		rw <= '0';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "11110011"; --read 0xf3
		data_in <= "00000000";
		rw <= '1';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;
		
		address <= "11110111"; --read 0xf7
		data_in <= "00000000";
		rw <= '1';
		wait for 10 ns;
		enable <= '1';
		wait for 10 ns;
		enable <= '0';
		wait for 10 ns;

      wait;
   end process;

  END;
