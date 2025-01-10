							|	POINTER IN C	|
							*-------------------*
Pointer:
	-> It is variable that holds the address of another variable.

=> How to find the address of any variable?	
& operator
	-> Used to find the address of any variable.
		int x=5;
		&x -> address of x
	-> Returns the address of the first byte.

=> How to declare and initialize a pointer?
int x = 5;
int* px = &x;

char c = 'A';
char* pc = &c;

=> What is the data type of the value(i.e, address) stored in a pointer?
Unsinged Integer : Only positive integer

=> How to find value at the given address? Dereference
* operator
	-> Used find the value stored at an address.
		*px - return value stored at address stored in pointer pc. 
		*pc
		
=> Why is the data type needed in pointer declarations?
https://stackoverflow.com/questions/9802585/why-is-the-data-type-needed-in-pointer-declarations
The data type is needed when dereferencing the pointer so it knows how much data it should read. For example dereferencing a char pointer should read the next byte from the address it is pointing to while an int pointer should read 4 bytes.

=> What is pointer to pointer?
	-> It is a pointer which holds the address of another pointer.
int x = 5
int* p1 = &x;
int** p2 = &p1;
Here p2 is pointer to pointer as it holds the address of another pointer p2.

Let x is stored at address 5551
Let p1 is stored at address 6661
Let p2 is stored at address 7771

x	-> 5
&x	-> 5551
p1	-> 5551
&p1	-> 6661
p2	-> 6661
&p2	-> 7771

*p1	-> *(5551) -> 5
*p2	-> *(6661) -> 5551
**p2 -> **(6661) -> *(5551) -> 5

printf("p1 = %u", p1);

=> Pointer arithmetic
p1 -> 5551
p1 + 1 -> 5551 + sizeof(*p1) = 5551 + 4	= 5555

=> Relation between Array and pointer

int ar[5]={5,4,3,2,1}; // total bytes = 5 * 4 = 20 bytes
ar[0] -> 5;
ar[1] -> 4;

Let ar[0] is stored at address 2221,
&ar[0] -> 2221
&ar[1] -> 2225
&ar[2] -> 2229
&ar[3] -> 2233
&ar[4] -> 2237

ar -> 2221 = &ar[0]
	-> The name of the array is actually a pointer.
	-> It holds the address of the first element.
*(ar + 0) -> 5 -> ar[0]
*(ar + 1) -> 4 -> ar[1]	
*(ar + 2) -> 3 -> ar[2]
*(ar + 3) -> 2 -> ar[3]
*(ar + 4) -> 1 -> ar[4]
=======================================================

In C programming, a variable's memory address is a numerical representation of the location in a computer's memory where the variable is stored. The memory address is in hexadecimal form, such as 0x... 
To access a variable's memory address in C, you can use the reference operator (&). For example, if you have a variable called myAge that contains the value 43, you can use the following code to output its memory address:
int myAge = 43;
printf("%p", &myAge); // Outputs 0x7ffe5367e044 
The expression &myAge is often called a "pointer". A pointer stores the memory address of a variable as its value. The type of the pointer must match the type of the variable being used. 
The format of a memory address can vary depending on the system's architecture and endianness. 
Variables are usually stored in RAM, either on the heap or on the stack. Global variables are usually stored on the heap, while variables declared within a function or method are usually stored on the stack. 


========================================
#include <stdio.h>
void swap(int* a, int* b);
int main(){
	int a=5, b=8;	
	printf("\nBefore swapping: a=%d and b=%d", b,a);
	swap(&a,&b);
	printf("\nAfter swapping: a=%d and b=%d", a,b);
	return 0;
}
void swap(int* pa, int* pb)
{
	int c;
	c = *pa;
	*pa = *pb;
	*pb = c;
}


=========================================

Memory allocation:
1. Static memory allocation
	-> Memory allocated can not be changed during runtime.
int a; // 4 bytes
int ar[100]; // 100 * 4 = 400 bytes

int* pa = &a;

unsigned int x=2;
unsigned int* &x;


2. Dynamic memory allocation
	-> Memory allocated can be changed during runtime.
	-> C provides 4 library function defined in <stdlib.h>
		1. malloc()
		2. calloc()
		3. free()
		4. realloc()
		
1. malloc(number_of_bytes)
malloc(7);

int* ptr = (int*)malloc(8);
float* ptr = (float*)malloc(8);

int* ptr = (int*)malloc(5*sizeof(int));
2. calloc()

int* ptr = (int*)calloc(5, sizeof(int));

3. free(ptr)
4. ptr = realloc(ptr, 3*sizeof(int))
-------------------
struct Node{
	int data;
	struct Node* next;
};

struct Node* pn=(struct Node*)malloc(sizeof(struct Node));








