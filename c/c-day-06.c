Control Statements:
	1. if-else, switch, conditional operator
	2. Looping
	3. break and continue
-----------------------------
Loops:
1. for loop
2. while loop
3. do while loop
-----------------------------
int x; // variable declaration
x = 5; // variable initialization/assignment

int x = 5; //variable declaration + initialization
------------------------------
1. for loop syntax:
for(Initialization; Condition; Change ){
	// statement-1
	// statement-2
	::::
	// statement-n
}

Q1. Write a program to print numbers from 1 to 5.
for(int i=1; i<= 5; i++)
{
	printf("%d ", i);
}
------------------------
int i;
for(i=1; i<= 5; i++)
{
	printf("%d ", i);
}
------------------------
int i=1;
for(; i<= 5; i++)
{
	printf("%d ", i);
}

i => 1 -> 2 -> 3 -> 4 -> 5 -> 6
--------
1 2 3 4 5 
=================================
Q2. Write a program to print numbers from 1 to n where n is given by user.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
	scanf("%d",&n);
    for(int i=1; i <= n; i++)
    {
	    printf("%d ", i);
    }

    return 0;
}
Q3. Write a program to print even numbers between 1 and n 
where n is given by user.
// Print even number from 1 to n.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
	scanf("%d",&n);
    for(int i=1; i <= n; i++)
    {
        if(i%2 == 0){
          printf("%d ", i);  
        }
    }
    return 0;
}

-----------------------------------
Q4. Write a program to print odd number between two given numbers.
#include <stdio.h>
int main() {
    int m,n;
    printf("Enter two number:");
	scanf("%d%d",&m,&n);
    for(int i=m; i <= n; i++)
    {
        if(i%2 != 0){
          printf("%d ", i);  
        }
    }
    return 0;
}
---------------------------------
Q5. Write a program to find the sum of all numbers between two given numbers.

















































