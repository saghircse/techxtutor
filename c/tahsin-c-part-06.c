Control Statements:
	1. if-else, switch case, conditional operator(?:)
	2. Looping
	3. break and continue
	
Loop:
-----
1. for loop
2. while loop
3. do while loop

for loop syntex:
----------------

for(Initialization ; Condition ; Change)
{
	
}

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

Q3. Write a program to print numbers in a range (b/n start and end)
#include <stdio.h>
int main() {
    int s,e;
    printf("Enter start and end number:");
    scanf("%d%d", &s, &e);
    for(int i=s; i<=e; i++){
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

Q4. Write a program find the following in a range (b/n start and end)
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



