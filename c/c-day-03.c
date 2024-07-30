Decision Control Statement
---------------------------
In Decision Control Statement, a group of statements are executed only 
when condition is true. If the condition is false, then the else part is
executed.

1. If statement:
if(condition)
{
	// if block - when condition is true
	// statements
}
2. If-else statement:
if(condition)
{
	// if block - when condition is true
	// statements
}
else
{
	// else block - when condition is false
	// statement
}

3. If-else-if ladder statement:

if(cond-1)
{
	// when cond-1 is true
}
else if(cond-2)
{
	// when cond-2 is true
}
:::::::
:::::::
else if(cond-n)
{
	// when cond-n is true
}
else{
	// when no any above conditions is true
}

4. Nested if-else
if(cond-1){
	if(cond-2){
	}
}else{
	if(cond-3){
	}else{
	}
}
-------------------------------
1. Say Hello if a number is even.
#include<stdio.h>
int main(){
	int x = 8;
	if(x%2 == 0)
	{
		printf("Hello");
	}
	return 0;
}

1. Check if a number is even or odd.

#include<stdio.h>
int main(){
	int x;
	printf("Enter a number:");
	scanf("%d", &x);
	if(x%2 == 0)
	{
		printf("%d is even.", x);
	}
	else
	{
		printf("%d is odd.", x);
	}
	return 0;
}

Output-1:
Enter a number: 6
6 is even

Output-2:
Enter a number: 3
3 is odd
		printf("Hello");
	}
	return 0;
}

3. Check if a number is positive or negative.(consider zero as positive)
#include<stdio.h>
int main(){
	int x;
	printf("Enter a number:");
	scanf("%d", &x);
	if(x>=0)
	{
		printf("%d is positive.", x);
	}
	else
	{
		printf("%d is negative.", x);
	}
	return 0;
}

4. Check if a number is positive or negative or zero.[HW]
#include<stdio.h>
int main(){
	int x;
	printf("Enter a number:");
	scanf("%d", &x);
	if(x>0)
	{
		printf("%d is positive.", x);
	}
	else if(x<0)
	{
		printf("%d is negative.", x);
	}
	else{
	    printf("%d is neither positive nor negative.", x);
	}
	return 0;
}
5. Check if a number is even and greater than 10.
6. Print grade of the student if marks is given.
7. Print name of the day for a given number as below
	1 -> Sunday
	2 -> Monday
	::::
	7 -> Saturday
	other -> Invalid day











