----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:14:21 01/21/2022 
-- Design Name: 
-- Module Name:    project - Behavioral 
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
use IEEE.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity project is
    Port ( zero1 : in  STD_LOGIC_VECTOR(5 downto 0);
	        a : in  STD_LOGIC_VECTOR(4 downto 0);
           b : in  STD_LOGIC_VECTOR(4 downto 0);
			  address : in  STD_LOGIC_VECTOR(4 downto 0);
			  zero2 : in  STD_LOGIC_VECTOR(4 downto 0);
			  operation : in  STD_LOGIC_VECTOR(5 downto 0);
			  address_ans : out  STD_LOGIC_VECTOR(4 downto 0);
           ans : out  STD_LOGIC_VECTOR(4 downto 0)
			  );
end project;

architecture Behavioral of project is

begin
   address_ans <= address;
	WITH operation SELECT
		ans <= std_logic_vector(to_signed((to_integer(signed(a)) + to_integer(signed(b))),ans'length)) WHEN "100000",
		       std_logic_vector(to_signed((to_integer(signed(a)) - to_integer(signed(b))),ans'length)) WHEN "100010",
		       a and b WHEN "100001",
		       a or b WHEN "100011",
		       a xor b WHEN "100100";
end Behavioral;

