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

Logic : 
1. Divide n by numbers from 2 to n-1
2. If n is not divisble by any of the numbers b/n 2 to n-1, 
	-> then n is prime
	-> Otherwise, n is not prime

#include<stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
	int x = 2;
	int isDivided;
	while(x <= n-1){
		if(n%x == 0){
			isDivided=1;
			break; // come out of the loop if n is divided by x - no need to check furthur.
		}else{
			isDivided=0;
		}
		x++;
	}
	
	if(isDivided==1){
		printf("\n%d is not prime.", n);
	}else{
		printf("\n%d is prime.", n);
	}
	return 0;
}
-----------
n=25
x=2 -> isDivided=0
x=3 -> isDivided=0
x=4 -> isDivided=0
x=5 -> isDivided=1  <--- stop (break)
25 is not a prime.
-----------
n=5
x=2 -> isDivided=0
x=3 -> isDivided=0
x=4 -> isDivided=0
x=5 X
5 is prime.
-----------

Q10. Find the sum digits of a number.
sum of digits = 3+4+8
n : 348 -> 348/10 = 34 -> 34/10 = 3 -> 3/10 = 0
r : 348%10 = 8, 34%10 = 4, 3%10 = 3
s : 0 -> 
		0 + 8 = 8 
			-> 8+4=12
				-> 12 + 3 =15
-------
int n, sum=0, r;
n<-scanf
while(n>0){
	r = n%10;
	sum = sum + r;
	n = n / 10; 3
}
printf("Sum of digits = %d",sum );

Q11. Print the following patterns.
---------a------
n=5
*
**
***
****
*****
for(int i=1;i<=n;i++){
	for(int j=1;j<=i;j++){
		print("*");
	}
	printf("\n")
}
Enter number: 3
n=3
---------------
i=1 -> i<=n True
	j=1 j<=i True - print *
	j=2 j<=i false
	print \n
i=2 -> i<=n True
	j=1 j<=i True - print *
	j=2 j<=i True - print *
	j=3 j<=i false
	print \n
i=3 -> i<=n True
	j=1 j<=i True - print *
	j=2 j<=i True - print *
	j=3 j<=i True - print *
	j=4 j<=i false
i=4 -> i<=n False
---------------
*
**
***
----------------
*****
****
***
**
*
for(int i=1;i<=n;i++){
	for(int j=n;j>=i;j--){
		print("s");
	}
	printf("\n")
}
-------------------
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
// Outer loop to print line
for(int i=1;i<=n;i++){
	// Inner Loop to print space for each line
	for(int j=n;j>=i;j--){
		print("s");
	}
	
	// Inner Loop to print star for each line
	for(int j=1;j<=i;j++){
		print("*");
	}
	printf("\n")
}
---------c------
    *
   ***
  *****
 *******
*********
n=5
i=1 
	space: 5
	star:1 = 2*i-1 = 1
i=2 
	space: 4
	star:3 = 2*i-1 = 3
i=3
	space:3
	star:5 = 2*i-1 = 5
i=4
	space:2
	star:7
i=5
	space:1
	star:9
===================================================
3. break and continue
https://www.google.com/imgres?q=break%20vs%20continue%20in%20c&imgurl=https%3A%2F%2Fd3kfrrhrj36vzx.cloudfront.net%2Fimages%2F1669743977276_21qplvg4.jpg&imgrefurl=https%3A%2F%2Fwww.krayonnz.com%2Fuser%2Fdoubts%2Fdetail%2F62a022d29a140200511a3900%2Fwhat-is-the-difference-between-break-and-continue-statements&docid=-wulhTXvtYXf5M&tbnid=R_mUl3Ko2Zt5XM&vet=12ahUKEwjQl6vkqPuHAxXZzjgGHRyDAyYQM3oECCUQAA..i&w=976&h=520&hcb=2&ved=2ahUKEwjQl6vkqPuHAxXZzjgGHRyDAyYQM3oECCUQAA
break : 
	-> Used to jump out of switch statement.
	-> Used to jump out of loop 
for(int i=0; i<10;i++){
    if(i==4){
        break; // jump out of loop
    }
	printf("%d ", i);
}	

Output : 0 1 2 3

continue : 	
1. Example-1
for(int i=0; i<10;i++){
    if(i==4){
        continue; // skip next statements in the loop and continue to next iteration.
    }
	printf("%d ", i);
}	
Output : 0 1 2 3 5 6 7 8 9

2. Example-2
// Do  not print even number greater than 5
    for(int i=0; i<10;i++){
        if(i>5 && i%2==0){
            continue;
        }
	    printf("%d ", i);
    }	
Output : 0 1 2 3 4 5 7 9	
	
===================================
1
4 9
16 25 36
49 64 81 100
--------------

int main(){
	int n=3; // scanf
	int x=1;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++){
			printf("%d",x*x);
			x++;
		}
		printf("\n");
	}
	return 0;
}
x=1 -> 2
Dry run:
--------
i=1 -> i<=n Yes
	j=1 -> j<=i -> Yes 1, x=2
	j=2 -> j<=i -> No -> Out of inner loop
i=2 -> i<=n Yes
	j=1 -> j<=i -> Yes 2 x=3
	j=2 -> j<=i -> Yes 3 x=4
	j=3 -> j<=i -> No -> Out of inner loop
i=3 -> i<=n Yes
	j=1 -> j<=i -> Yes 4 x=5
	j=2 -> j<=i -> Yes 5 x=6
	j=3 -> j<=i -> Yes 6 x=7
	j=4 -> j<=i -> No -> Out of inner loop
i=4 -> i<=n No -> out of outer loop
==========================================
// Online C compiler to run C program online
/*
1
2 3
4 5 6
7 8 9 10
4 5 6
2 3
1
*/
#include <stdio.h>
int main() {
    int n=5, c=0;
    // For the first half
    for(int i=1; i<=n; i++){ // i=1,2,3,4
        for(int j=1; j<=i; j++){
            c++;
            printf("%d ", c);
        }
        printf("\n");
    }
    // For the second half
    int x;
    for(int i=n-1; i>=1; i--){ // i=3,2,1
        x = i*(i+1)/2 - i + 1;
        for(int j=1; j<=i; j++){
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}	






















































