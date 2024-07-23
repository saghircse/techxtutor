=> Data Types
	-> Basic data types: int, char, float, double
	-> Enumeration data type: enum
	-> Derived data type: pointer, array, structure, union
	-> Void data type: void
=> sizeof() function is used to find the memory space allocated for each C data types.	
#include <stdio.h>
int main()
{
   int a;
   char b;
   float c;
   double d;
   printf("Storage size for int data type:%d \n",sizeof(a));
   printf("Storage size for char data type:%d \n",sizeof(b));
   printf("Storage size for float data type:%d \n",sizeof(c));
   printf("Storage size for double data type:%d\n",sizeof(d));
   return 0;
}

OUTPUT:
Storage size for int data type:4
Storage size for char data type:1
Storage size for float data type:4
Storage size for double data type:8

--------------------
int -> 4 byte
short int -> 2 byte
long int -> 8 byte
--------------------
There are 5 modifiers available in C language. They are,
short
long
signed
unsigned
long long

==========================================
==========================================
C TOKENS:
---------
-> C tokens are the basic buildings blocks in C language which are 
constructed together to write a C program.
-> Each and every smallest individual units in a C program are 
known as C tokens.
C tokens are of six types. They are,
1. Keywords               (eg: int, while),
2. Identifiers            (eg: main, total),
3. Constants              (eg: 10, 20),
4. Strings                    (eg: "total", "hello"),
5. Special symbols  (eg: (), {}),
6. Operators              (eg: +, /,-,*)

=====================
IDENTIFIERS = Names given to identify Variables, functions and arrays
KEYWORDS = Keywords are pre-defined words in C. Total = 32

int s = 3 + 5;
int -> datatype, keyword
s -> identifier / variable name
=, + -> Operators
; -> symbols
3,5 -> constants

======================
Operators : 
	-> Operators are used to perform any specific operation on one or more operands.
Example:
int s = 3 + 5;
3,5, s -> operands
+ -> addition (arithmetic)
= -> assignment

Types:
1. Arithmetic operators
	-> Used to perform mathematical calculation.
	-> (+, -, *, /, %)
int x = 5;
x = x + 2;
2. Assignment operators
	-> Used to assign the values for the variables.
	-> (=, +=, -=, *=, /=, %=)
	
x += 2;  // x = x + 2
x -= 3;  // x = x - 3

3. Relational operators
	-> Used to compare the value of two variables/constants.
	-> ( ==, <, >, <=, >=, !=)
5 == 4 // No/False/0
5 == 5 // True/1
5 != 4 // True
5 < 4 // False
5 <= 4 // False
5 <= 5 // True
4 <= 5 // True

4. Logical operators
	-> Used to perform logical operations like AND, OR and NOT.
	-> ( && , ||,  !)
&& -> AND
|| -> OR
! -> NOT
---------
0 -> False
1 -> True
-------------------------------------
a	|	b	|	a && b	|	a || b	|
-------------------------------------
0	|	0	|	0		|	0		|
0	|	1	|	0		|	1		|
1	|	0	|	0		|	1		|
1	|	1	|	1		|	1		|
-------------------------------------
!0 -> 1
!1 -> 0

int a;
Check if a is even and less than 10.
a%2 == 0 && a < 10

Let a = 5,
5%2 == 0 && 5 < 10
	-> 1 == 0 && 5 < 10
	-> 0 && 1 -> 0 -> False
-----------------
Let a = 11 -> 0 && 0 -> False
Let a = 5 -> 0 && 1 -> False
Let a = 12 -> 1 && 0 -> False
Let a = 8 -> 1 && 1 -> True

5. Increment(++)/decrement(--) operators
	-> Used to either increase or decrease the value of the variable by one.
Increment(++) : Increases the value of variable by 1
int a = 5;
a++; // a = a + 1 -> Post increment
++a; // a + a + 1 -> Pre increment

decrement(--) : Decreases the value of variable by 1
int b = 5;
b--; // b = b - 1 -> Post decrement
--b; // b = b - 1 -> Pre decrement
------------------
Example-1: post increment
int a = 3;
int b = 5;
b = b + a++; // b = b + a; a = a + 1;
Value of a is 4
Value of b is 8

Example-2: pre increment
int a = 3;
int b = 5;
b = b + ++a; // a = a + 1; b = b + a; 
a -> 4
b -> 9
Value of a is 4
Value of b is 9

6. Bit wise operators
	-> Used to perform bit operations on the given two variables.
	-> 	& (Bitwise AND), 
		| (Bitwise OR),
		~ (Bitwise NOT), 
		^ (Bitwise XOR), 
		<< (Left Shift), 
		>> (Right Shift)
XOR
0 ^ 0 => 0
0 ^ 1 => 1
1 ^ 0 => 1
1 ^ 0 => 0

int x = 2; // 10
int y = 3; // 11
x & y; // 10 & 11 => 10 => 2
x | y; // 10 | 11 => 11	=> 3
~x; // ~10 => 01 => 1
~y; // ~11 => 00 => 0
x ^ y; // 10 ^ 11 => 01 => 1
------
x < 1; // The bits of x will be left shifted by 1
x < 2; // The bits of x will be left shifted by 2
#include <stdio.h>
int main() {
    int a=2, b=3;
    printf("\na AND b = %d", a & b);
    printf("\na OR b = %d", a | b);
    printf("\na XOR b = %d", a ^ b);
    printf("\na << 1 = %d", a << 1);
    printf("\nb << 2 = %d", b << 2);
    return 0;
}	
	
bits = 0 or 1
1 byte = 8 bits
1 KB (Kilobyte) = 1024 byte
1 MB (Megabyte) = 1024 KB
1 GB (Gigabyte)	= 1024 MB
1 TB (Terabyte) = 1024 GB
1024 = 2^10
7. Conditional operators (ternary operators)
8. Special operators (sizeof(), *, &)

---------------
Types of operators based on number of operands:
1. Binary operators : The operators having 2 operands. (+, -, <=, &&, etc).
2. Unary Operators : The operators having 1 operand. (!, ++, --, ~)
3. Ternary Operator : The operators having 3 operands. (?:)




