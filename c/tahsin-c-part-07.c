ARRAY
-----
	-> Used to store multiple values in a single variable,
		instead of declaring sparate variable for each value.
	-> Homogeneous : Collection of same type of elements.
	-> Indexed based which starts with zero.
		-> Values are stored sequentially starting with index 0.
		-> Provides random access using index
	-> Fixed or constant size
	-> Contiguous memory allocation


int a1=5;
int a2=6;
int a3=3;
int a4=5;
int a5=8;

----------------
int x;

int arr[10];
int[10] arr;
arr[0] = 5;
arr[1] = 4;
arr[2] = 3;

printf("%d", arr[1]);
scanf("%d", &arr[3]);
-----------

int arx[]={1,2,4,5}; //size of array=4
int arx[5]={1,2,4}; // 

-----------
// Find the sum of n integers
#include <stdio.h>

int main() {
    int arr[10];
    int n;
    printf("Enter number of integers: ");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0; i<=n-1; i++){
        sum = sum + arr[i];
        printf("%d ",arr[i]);
    }
    
    printf("\nTotal sum = %d", sum);

    return 0;
}

Q.3 Write a program to find the total sum, even sum and odd sum of all elements in an array.
Q.4 Write a program to search an element in an array.






















