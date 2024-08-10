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

loop 
iteration
1. for loop syntax:
for(Initialization; Condition; Change ){
	// statement-1
	// statement-2
	::::
	// statement-n
}
----------------------------------
2. while loop syntax:
Initialization
while(Condition){
	// statement-1
	// statement-2
	::::
	// statement-n
	Change
}
-> Entry controlled loop
-----------------------------------
Initialization
do{
	// statement-1
	// statement-2
	::::
	// statement-n
	Change
}
while(Condition);
-> Exit controlled loop
-> loop body is executed at least once.

int i=6;
while(i<=5)
{
	printf("%d ", i);
	i++;
}

int i=6;
do
{
	printf("%d ", i);
	i++;
}
while(i<=5);
-----------------------------------
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

--------------------------while loop---
int i=1; // initialization
while(i<=5) // condition
{
	printf("%d ", i);
	i++; // Change
}
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
Q6. Write a program to find the sum of even numbers and odd numbers between two given numbers.
Q7. Factorial of a number.
Q8. Find the reverse of a number.
	-> Also Check if a number is palindrome or not. 
		-> 121, 3223 : palindrome numbers
		-> 123 not palindrome
		
n=235
rn=0
---------iteration=1
r = n%10 = 5
rn = rn*10 + r = rn*10 + 5 = 5
n = n/10 = 23
---------iteration=2
r = n%10 = 3
rn = rn*10 + r = rn*10 + 3 = 53
n = n/10 = 2
---------iteration=3
r = n%10 = 2
rn = rn*10 + r = rn*10 + 2 = 532
n = n/10 = 0
------

#include <stdio.h>
int main() {
    int n,rn, r, t;
    printf("Enter number: ");
    scanf("%d", &n);
    rn = 0;
    t = n;
    while(t!=0){
	    r=t%10;
	    rn=rn*10 + r;
    	t=t/10;
    }
    printf("Reverse of %d = %d\n", n, rn);
    if(n==rn){
	    printf("%d is a palindrome", n);
    }
    else{
	    printf("%d is not a palindrome", n);
    }
    return 0;
}

Q9. Check if a number is prime or not.
Q10. Print the following patterns.
---------a------
n=5
*
**
***
****
*****

1
22
333
4444
55555

1
23
456
---------b------
n=4
   *
  **
 ***
****
---------c------
   *
  ***
 *****
*******






















































