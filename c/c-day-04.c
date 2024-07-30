1. Greatest of three numbers
#include<stdio.h>
int main(){
	int x, y, z;
	printf("Enter three number:");
	scanf("%d%d%d", &x, &y, &z);
	// case-1 : 8, 6, 4
	// case-2 : 8, 6, 9
	// case-3 : 8, 10, 9
	// case-4 : 8, 10, 12
	if(x>y)
	{	
		if(x>z){
			printf("%d is the greatest.",x);
		}
		else{
			printf("%d is the greatest.",z);
		}
	}
	else
	{
		if(y>z){
			printf("%d is the greatest.",y);
		}
		else{
			printf("%d is the greatest.",z);
		}
	}
	
	return 0;
}


#include<stdio.h>
int main(){
	int x, y, z;
	printf("Enter three number:");
	scanf("%d%d%d", &x, &y, &z);
	int big;
	if(x>y && x>z)
	{	
		big = x;
	}
	else if(y>x && y>z){
	{
		big = y
	}
	else
	{
		big = z
	}
	
	printf("%d is the greatest.",big);
	
	return 0;
}

=========================================================
1. Greatest of two numbers
#include<stdio.h>
int main(){
	int x, y;
	printf("Enter two number:");
	scanf("%d%d", &x, &y);
	if(x>y)
	{
		printf("%d is the greatest.",x);
	}
	else
	{
		printf("%d is the greatest.",y);
	}
	return 0;
}

#include<stdio.h>
x 8, y 5
big 8
-------
x 8 y 10
big 10

int main(){
	int x, y;
	printf("Enter two number:");
	scanf("%d%d", &x, &y);
	int big;
	if(x>y)
	{
		big=x;
	}
	else
	{
		big=y;
	}
	printf("%d is the greatest.",big);
	return 0;
}

=======================
8 4
big 8
------
4 8
big 4(false), 8
int main(){
	int x, y;
	printf("Enter two number:");
	scanf("%d%d", &x, &y);
	int big = x;
	if(y>big)
	{
		big=y;
	}
	printf("%d is the greatest.",big);
	return 0;
}