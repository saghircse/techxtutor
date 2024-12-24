Control Statements:
	1. if-else, switch case, conditional operator(?:)
	2. Looping
	3. break and continue
	
Loop:
-----
1. for loop
2. while loop
3. do while loop

1. for loop syntex:
-------------------

for(Initialization ; Condition ; Change)
{
	// block
}

2. while loop syntex:
---------------------
Initialization
while(Condition)
{
	// block
	
	Change
}

=> Entry controlled loop

3. do while loop syntax
-----------------------
Initialization
do{
	// block
	Change
}while(condition);

=> Exit controlled loop 

Q1. Write a program to print "Hello" n times.

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
	    printf("\nHello");
    }
    return 0;
}

// Using while loop
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
	int i=1;
	while(i<=n){
		printf("\nHello");
		i++;
	}
    return 0;
}

--------------------------------------
Enter a number:5

Hello
Hello
Hello
Hello
Hello
--------------------------------------
0. Initialization (only once)
	i->1
1. i++, i->1, i<=5 => True ---> Hello
2. i++, i->2, i<=5 => True ---> Hello
3. i++, i->3, i<=5 => True ---> Hello
4. i++, i->4, i<=5 => True ---> Hello
5. i++, i->5, i<=5 => True ---> Hello
6. i++, i->6, i<=5 => False ---> Exit(out of loop)

Q2. Write a program to print numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
	int i=1;
	while(i<=n){
		printf("%d",i);
		i++;
	}
    return 0;
}

Q3. Write a program to print numbers in a range (b/n start and end)
#include <stdio.h>
int main() {
    int s,e;
    printf("Enter start and end number:");
    scanf("%d%d", &s, &e);
	int i;
    for(i=s; i<=e; i++){
	    printf("%d\n",i);
    }
    return 0;
}

Q4. Write a program to print even numbers in a range (b/n start and end)
#include <stdio.h>
int main() {
    int s,e;
    printf("Enter start and end number:");
    scanf("%d%d", &s, &e);
    for(int i=s; i<=e; i++){
        if(i%2==0){
            printf("\n%d",i);
        }
    }
    return 0;
}

Q5. Write a program find the following in a range (b/n start and end)
a. total sum
b. even sum (sum of even numbers)
c. odd sum (sum of odd numbers)
#include <stdio.h>
int main() {
    int s,e;
    printf("Enter start and end number:");
    scanf("%d%d", &s, &e);
    int sum=0;
    for(int i=s; i<=e; i++){
        sum = sum + i;
    }
    printf("\nSum = %d", sum);
    return 0;
}

Q6. Write a program find factorial of a number.

5! = 5*4*3*2*1 = 1*2*3*4*5

Q7. Check if a number is prime or not.

Q8. Write a program to find reverse of a number. 
n=12345
rn=54321

n=13231
rn=12231
Also check if the number is palindrome or not.
if(n==rn){
	//palindrome
}
---------------------------------------------------
n=123
rn=0
----
r=n%10; --> 3
rn = rn*10+r --> 3
n=n/10 ---> 123/10=12
----
r=n%10 ---> 12%10 = 2
rn = rn*10+r ---> 3*10+2=32
n=n/10 ---> 12/10=1
----
r=n%10 ---> 1%10 = 1
rn = rn*10+r = 32*10+1 = 321
n=n/10 ---> 1/10=0

#include <stdio.h>
int main() {
    int n,rn=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    int tn=n;
    while(n>0){
	    r=n%10;
	    rn = rn*10+r;
	    n=n/10;
    }
    printf("Reverse of %d is %d",tn,rn);
    
    if(tn==rn){
        printf("\n%d is palindrome.", tn);
    }else{
        printf("\n%d is not palindrome.", tn);
    }
    return 0;
}

---------------
Q9. Write a program to find number of digits in a number.
1435 ---> 4
345090 ---> 6
Q10. Write a program to print english word of all digits in number.
123 -> One Two Three
150 -> One Five Zero

Q11. Print the following patterns.
---------a------
n=5
*
**
***
****
*****
--------b------
*****
****
***
**
*
--------c-------
n=4
   *
  **
 ***
****

---------d------
    *
   ***
  *****
 *******
*********
--------e------

1
22
333
4444
55555


1
2	3
4	5	6
7	8	9	10
11 	12	13	14	15


--
Q100. Find all combination of 3 digit number using digits from 0 to 9.

