POINTER IN C
-------------
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
