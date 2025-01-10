Function:
	-> It is block of code to perform a specific task.
	-> It takes input, process it, and returns an output.
	
	zero or more input ->[processing] -> zero or more output
	
Advantage:
	1. Help organize
	2. Promote reusability
	3. Improve readability
--------------------------------------------------------------
Variable:
dataType varName = <value>;
int x=5;

=> Function Declaration:
returnType functionName(dataType arg1, dataType arg2,... );
int cubeSum(int a, int b);

=> Function Definition:
returnType functionName(dataType arg1, dataType arg2,... )
{
	// Function body
}
int cubeSum(int a, int b){
	int cs = a*a*a + b*b*b;
	return cs;
}

=> Function call:
returnType variableX = functionName(value1, value2,..);
int cs = cubeSum(5, 2);


#include <stdio.h>

// Function Declartion (Prototype)
// int cubeSum(int a, int b);
int cubeSum(int, int);

int main() // entry
{
    printf("\nInside main");
    
    int cs = cubeSum(3,2); // Function call
    printf("\nSum of cube of two numbers: %d",cs);
    
    return 0;
}

// Function Definition
int cubeSum(int a, int b) {
    printf("\nInside cubeSum");
	int cs = a*a*a + b*b*b;
	return cs;
}

-----------------------
Variety of function:
1. No any input and returns nothing 
    => void sayHello().
2. Takes input, but doesn't return anything.
    => void printCubeSum(int a, int b)
3. Takes input and returns value. 
    => int cubeSum(int,int)
4. No any input, but returns value 
    => int main()
------------------------
Types of function:
1. Inbuilt function:
	printf(), scanf() from stdio.h
	pow(), sqrt() from math.h
	
2. Custom/User defined function : 
	sayHello(), reverseOfNum()
-------------------------
Program 1:
#include <stdio.h>
void printReverseOfNum(int x);
int  reverseOfNum(int x);
int largestNum(int a, int b, int c);
int main(){
	int x1=1234, x2=5346, x3=9840;
	printReverseOfNum(x1);
	printReverseOfNum(x2);
	printReverseOfNum(x3);
	
	// Program to find largest of reverse of x1, x2 and x3
	int rx1 = reverseOfNum(x1);
	int rx2 = reverseOfNum(x2);
	int rx3 = reverseOfNum(x3);
	
	int big = largestNum(rx1, rx2, rx3);
	printf("\nLargest of reverse of x1, x2 and x3 : %d", big);
	
	return 0;
}
int largestNum(int a, int b, int c)
{
    int big;
    if(a >= b && a >= c){
        big = a;
    }else if (b >= a && b >= c){
        big = b;
    }else{
        big = c;
    }
    return big;
}

void printReverseOfNum(int x)
{
	int rn=reverseOfNum(x);
	printf("\nReverse of %d is %d",x,rn );
}

int reverseOfNum(int x)
{
	int rn=0,r,n=x;
	while(n>0)
	{
		r = n%10;
		rn = rn*10 + r;
		n = n/10;
	}
	return rn;
}

Question-1:
Write a program to find the sum of all the prime in a range.
	-> Use function when required.
	
Question-2:
Create a program with multiple functions, such as a calculator that 
performs basic arithmetic operations(+,-,*,/,%, power).

Question-3:
Write a program to compute the sum of series 1/1! + 1/2! + 1/3! + ..+ 1/n!

Question-4:
Write a program to compute the sum of series 1/1! + 2/2! + 3/3! + ..+ n/n!

Question-5:
Write a program to compute the sum of series 1^2/1! - 2^2/2! + 3^2/3! - .. n^2/n!

=================================
Loop : 
Iterate over a set of instructions agains and again until a certain condition is met.

Recursion Function : 
	-> The function which calls itself again and again until a certain condition is met.
	-> All the program which can solved using loop can also be solved using recursion.
	-> All the function calls are stored in stack.
	
5! = 5 * 4 * 3 * 2 * 1 = 1 * 2 * 3 * 4 * 5

Using Loop:
int fact(int n){
	int f=1;
	for(int i=1; i<=n; i++){
		f = f * i;
	}
	return f;
}

Using recursion:
fact(n) = n * fact(n-1)
main()
->fact(5) 
	-> 5 * fact(4)
		-> 4 * fact(3)
			-> 5 * 4 * 3 * fact(2)
				-> 5 * 4 * 3 * 2 * fact(1)
					-> 5 * 4 * 3 * 2 * 1 * fact(0)
						-> 5 * 4 * 3 * 2 * 1 * 1


int fact(int n){
	// base condition
	if(n==0){
		return 1;
	}
	return n * fact(n-1);
}
int main() {
    int n=5;
    int f = fact(n);
    printf("Fact of %d = %d", n, f);
    return 0;
}

-------------
Queue : 
	-> FIFO (First In First Out)
	-> People in the queue at ticket counter
	
Stack:
	-> LIFO (last In First Out)
	-> Stack of plates or books
	-> Function calls
	
	

	
	
	
	
	
	
	
















