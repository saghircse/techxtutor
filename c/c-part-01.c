// C
What is C?
=> C is programming language.
	-> Compiler based
	-> Middle Level Language
	-> Structured 
=> Developed by Dennis Ritchie in 1972.
----------------------------------------------
Language - Medium of communication
	[English] <-> [English] --- Yes
	[Hindi] <-> [Hindi] --- Yes
	[English] <-x-> [Hindi] --- No
	Using Translators:
	[English] <->[English/Hindi]<-> [Hindi] --- Yes
-----------------------------------------------
Language:
High Level Language(HLL)
Middle Level language(MLL)
Low Level language(LLL) - 
------------------------
HLL/MLL -> Closer to human language
LLL -> Closer to machine language
(Human) <-> [Translator] <-> (Machine)
Types of Translators:
1. Compiler
2. Interpreter
3. Assembler
--------------------------
2. What is difference b/n HLL, MLL and LLL?
3. Why C is called MLL?
4. What is difference b/n compiler and interpreter?
Interpreter translates just one statement of the program at a time into machine code. 
Compiler scans the entire program and translates the whole of it into machine code at once. 
----------------------------
s = a + b <-- High level
ADD A B <-- Assembly code
0001000 <-- machine code
--------------------------
5. Write the flow of C program.
https://www.javatpoint.com/flow-of-c-program

[C program] -> (Compiler) -> [Assembly Code] -> (Assembler) -> [Machine Code]
---------------------------
Basic structure of C program.

#include<stdio.h>
int main()
{
	printf("Hello World");
	return 0;
}
-------------------------
main() -> function which is a entry point of any C program execution.
stdio.h -> standard input output

printf() -> Output function
scanf() -> Input function
--------------------------
English
-------
[alphabets, numbers, special characters] -> [Words] -> [Sentence] ->[Paragraph]
I have 5 kg mango. I will give you 2kg mango.

C programming
-------------
[alphabets, numbers, special characters]
	-> Tokens[Data Types, Variable, Keywords, Operators]
		-> [Instructions]
			->[Program]
		
Program : A set of instructions to execute any specific task by computer.

#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers");
	scanf("%d%d", &a, &b);
	int s = a+b;
	printf("Sum of %d and %d is %d", a, b, s);
	return 0;
}
---------------
0. Hello world program in C.
1. Swapping of two numbers.
2. Swapping of two numbers without using third variable.
















