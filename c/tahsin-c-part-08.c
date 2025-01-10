Function:
	-> It is block of code to perform a specific task.
	-> It takes input, process it, and returns an output.
	
	zero or more input ->[processing] -> zero or more output
	a,b->[sum]->s
	3,5->[sum]->8
Advantage:
	1. Help organize
	2. Promote reusability
	3. Improve readability
	
-----------------
	
=> Function Declaration:
returnType functionName(dataType arg1, dataType arg2,... );
int cubeSum(int a, int b);

=> Function Definition:
returnType functionName(dataType arg1, dataType arg2,... )
{
	// Function body
	
	return <>;
}

int cubeSum(int a, int b){
	int cs = a*a*a + b*b*b;
	return cs;
}

=> Function Call:
returnType varName = functionName(value1, value2,... );
int cs = cubeSum(3,5);

1. Takes no input and return nothing
2. Takes no input, but returns something
3. Takes input and return nothing
4. Takes input and return something

// Online C compiler to run C program online
#include <stdio.h>

// Function Declaration or function prototype
void sayHello();
//void printSumOfCube(int x, int y);
void printSumOfCube(int, int);
int getSumOfCube(int a, int b);
void readAndPrintSumOfCube();
int cube(int a);
int readInt();

int main() {
    printf("\nInside Main......!");
    sayHello();
    sayHello();
    printSumOfCube(3,5);
    printSumOfCube(8,5);
    int x = getSumOfCube(2,3);
    printf("\n%d",x);
    printf("\n%d",getSumOfCube(5,3));
    readAndPrintSumOfCube();
    return 0;
}

// Function Definition
// no input, no return
void sayHello() {
    printf("\nHello!");
}

// takes input, no return
void printSumOfCube(int a, int b){
	//int cs = a*a*a + b*b*b;
	int cs = getSumOfCube(a,b);
	printf("\nSum of cube of %d and %d is %d", a,b,cs);
}

// takes input and return
int getSumOfCube(int a, int b){
	//int cs = a*a*a + b*b*b;
	int cs = cube(a)+cube(b);
	return cs;
}


void readAndPrintSumOfCube(){
    int a,b;
    //printf("\nEnter two numbers: ");
    //scanf("%d%d", &a, &b);
    //int cs = a*a*a + b*b*b;
    //printf("\nSum of cube of %d and %d is %d", a,b,cs);
    a = readInt();
    b = readInt();
    printSumOfCube(a,b);
}

int cube(int a){
    return a*a*a;
}

int readInt(){
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    return a;
}

============================
Types of function:
1. Inbuilt function:
	printf(), scanf() from stdio.h
	pow(), sqrt() from math.h
	
2. Custom/User defined function : 
	sayHello(), reverseOfNum()
	
============================
Question-3:
Write a program to compute the sum of series 1/1! + 1/2! + 1/3! + ..+ 1/n!	

int main(){
	int n; //scanf
	float res=0;
	for(int i=1; i<=n; i++){
		res = res + 1/fact(i);
	}
}

int fact(int x){
	int f=1;
	for(int i=2; i<=x; i++){
		f = f*i;
	}
	return f;
}


	