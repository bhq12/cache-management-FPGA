----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:10:45 10/11/2016 
-- Design Name: 
-- Module Name:    cache_system_two_way - Behavioral 
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

entity cache_system_two_way is
	port(
	clk : in std_logic; 
	data_in: in std_logic_vector(7 downto 0);
	operation : in std_logic_vector(2 downto 0);
	data_out : out std_logic_vector(7 downto 0);
	address_in : in unsigned(7 downto 0));
end cache_system_two_way;

architecture Behavioral of cache_system_two_way is

component simple_ram is
	port(clk : in std_logic; 
	address: in unsigned(7 downto 0);
	data_in: in std_logic_vector(7 downto 0);
	data_out : out std_logic_vector(7 downto 0);
	enable, rw: in std_ulogic;
	write_to_cache : out std_ulogic := '0');
end component;

component cache_ram_two_way is
	port(
	clk : in std_logic; 
	address: in unsigned(7 downto 0);
	data_in: in std_logic_vector(7 downto 0);
	data_out: out std_logic_vector(7 downto 0);
	enable, rw: in std_ulogic;
	hit_miss: out std_ulogic := '0');
end component;

component cache_controller_frog is
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
end component;


signal data_from_cache_signal, data_from_memory_signal, data_to_device_signal : std_logic_vector(7 downto 0);
signal address_signal : unsigned(7 downto 0);
signal enable_cache, enable_main, read_write_signal, read_ready_signal, hit_miss_signal : std_ulogic;

begin

CONTROL : cache_controller_frog port map (
		clk => clk,
		data_in => data_in,
		data_from_cache => data_from_cache_signal,
		data_from_memory => data_from_memory_signal,
		operation => operation,
		data_to_device => data_to_device_signal,
		data_result => data_out,
		address_in => address_in,
		address_out => address_signal,
		rw_out =>read_write_signal,
		hm => hit_miss_signal,
		em => enable_main,
		ec => enable_cache,
		read_ready => read_ready_signal
);

MAIN_MEMORY : simple_ram port map (
		clk => clk,
		address => address_signal,
		data_in => data_to_device_signal,
		data_out => data_from_memory_signal,
		enable => enable_main,
		rw => read_write_signal,
		write_to_cache => read_ready_signal

);

CACHE_MEMORY : cache_ram_two_way port map (
		clk => clk,
		address => address_signal,
		data_in => data_to_device_signal,
		data_out => data_from_cache_signal,
		enable => enable_cache,
		rw => read_write_signal,
		hit_miss => hit_miss_signal
);



end;

