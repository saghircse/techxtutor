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



