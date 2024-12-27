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
int arr[100];
int N;
// Read N elements for array
int x;//search element -> scanf
int isFound=0; // 0 -> no, 1->yes
for(int i=0; i<N; i++){
	if(x==arr[i]){
		isFound=1;
		break;
	}
}
if(isFound==1){
	//Found
}else{
	// Not found
}

Q.5 Write a program that takes an array of integers and finds the largest and smallest numbers.
int largest;
int smallest;
for(int i=0; i<N; i++){
	if(i==0){
		largest=arr[i];
		smallest=arr[i];
	}else{
		if(arr[i]>largest){
			largest=arr[i];
		}
		
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
}

6 7 8 2 5
---------
i=0, arr[0], l=6, s=6
i=1, arr[1], l=7, s=6
i=2, arr[2], l=8, s=6
i=3, arr[3], l=8, s=2
i=4, arr[4], l=8, s=2
----------------------

2D array:
--------
int ar[3][2]={{2,4},{5,6},{8,3}};


=>Declare 2D array:
int ar[100][100];
=>Read 2D array:
int rows; <- scanf
int cols; <- scanf

for(int r=0; r<rows; r++){
	for(int c=0; c<cols, c++){
		scanf("%d", &ar[r][c]);
	}
}
=>Print 2D array:
for(int r=0; r<rows; r++){
	for(int c=0; c<cols, c++){
		printf("%d", ar[r][c]);
	}
}


-------------
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int ar[100][100];
    int rows;
    int cols;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&rows,&cols);
    
    printf("Enter %d elements:\n", rows*cols);

    for(int r=0; r<rows; r++){
	    for(int c=0; c<cols; c++){
		    scanf("%d", &ar[r][c]);
	    }
    }
    
    printf("Array elements are:\n");
    for(int r=0; r<rows; r++){
	    for(int c=0; c<cols; c++){
		    printf("%d ", ar[r][c]);
	    }
	    printf("\n");
    }

    return 0;
}


Q.6 Write a program to search an element in a 2D array.
Q.7 Write a program that takes an 2D array of integers and finds the largest and smallest numbers.
Q.8 Find the sum of a. primary diagonal elements and b. secondary diagonal elements of matrix.
Q.9 Find the sum of two matrices.
Q.10 Find the product of two matrices.























