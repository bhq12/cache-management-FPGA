----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:51:58 10/07/2016 
-- Design Name: 
-- Module Name:    bit4_counter - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity bit4_counter is
port (clk : in std_logic; 
      count : out std_logic_vector(3 downto 0);
      reset :in std_logic
     );
end bit4_counter;

architecture Behavioral of bit4_counter is
signal c : std_logic_vector(3 downto 0) :=(others => '0');  --initializing count to zero.
begin
count <= c;
process(clk,reset)
begin
if(clk'event and clk='1') then
-- when count reaches its maximum(that is 15) reset it to 0
if(c = "1111") then 
c <="0000";
end if;
c <= c+'1';  --increment count at every positive edge of clk.
end if;
if(reset='1') then  --when reset equal to '1' make count equal to 0.
c <=(others => '0');  -- c ="0000"
end if;
end process;

end Behavioral;
