							|	POINTER IN C	|
							*-------------------*
Pointer:
	-> It is variable that holds the address of another variable.

=> How to find the address of any variable?	
ampersand(&) operator
	-> Used to find the address of any variable.
		int x=5;
		&x -> address of x
	-> Returns the address of the first byte.

=> How to declare and initialize a pointer?
int x=5;
int* px = &x; // px is a integer pointer

char c='D';
char* pc = &c; // pc is a character pointer

float f=3.4;
float *pf = &f; // pf is a float pointer

=> How to find value at the given address? Dereference
* operator
	-> Used find the value stored at an address.
		*px - return value stored at address stored in pointer pc. 
		*pc

int x=5;		// let x is stored at 1001
char c='D';		// let c is stored at 2001

int* px=&x;		// let px is stored at 3001
char* pc=&c;	// let pc is stored at 4001
int** ppx = &px; // let ppx is stored at 5001

x -> 5
c -> D
&x -> 1001
&c -> 2001
px -> 1001
pc -> 2001
&px -> 3001
&pc -> 4001
ppx -> 3001
&ppx -> 5001

*px -> *(1001) -> 5
*pc -> *(2001) -> D
*ppx -> 1001
**ppx -> 5

=> Pointer arthmetic
x -> 5
&x -> 1001
px -> 1001

px+3 -> px + 3*(sizeof(int))
------------------------------------

=> Relation between Array and pointer
int ar[5] = {4,5,2,3,7}; // 5*4byte = 20byte

The name of array 'ar' is actually pointer that stores the address of 1st byte. 
Let ar=1000 <-- base address of array

ar+0 -> 1000 -> &ar[0]
ar+1 -> 1004 -> &ar[1]
ar+2 -> 1008 -> &ar[2]
ar+3 -> 1012 -> &ar[3]
ar+4 -> 1016 -> &ar[4]

*(ar+0) -> *(1000) -> 4
*(ar+1) -> *(1004) -> 5
*(ar+2) -> *(1008) -> 2
*(ar+3) -> *(1012) -> 3
*(ar+4) -> *(1016) -> 7

ar[0] -> 4 -> *(ar+0)
ar[1] -> 5 -> *(ar+1)
ar[2] -> 2 -> *(ar+2)
ar[3] -> 3 -> *(ar+3
ar[4] -> 7 -> *(ar+4)



