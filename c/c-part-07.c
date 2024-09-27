Array:
	-> Used to store multiple values in a single variable,
		instead of declaring sparate variable for each value.
	-> Homogeneous : Collection of same type of elements.
	-> Indexed based which starts with zero.
		-> Values are stored sequentially starting with index 0.
		-> Provides random acces using index
	-> Fixed or constant size
	-> Contiguous memory allocation
	
	int x = 5; x(binary of 5) 445500 <- 4 bytes
	int a[3]; --> 3*4=12 bytes -->  10001, 10002,.....,10012 // 12 bytes
	a[0] --> 10001,..,10004 // 4 bytes
	a[1] --> 10005,..,10008 // 4 bytes
	a[2] --> 10009,..,10012 // 4 bytes
	
int a1=5;
int a2=3;
int a3=4;
::
::
int a100=9;

Variable: 
declartion:
	datatype variableName;
		int x;
		char y;
intialization:
	variableName = value;
	x=5;
	y='f';
int x=5;
char y='f';
---------------------------
Array:
declartion:
	datatype arrayName[size];
	datatype[size] arrayName;
	int numbers[10];
	char grades[5];
intialization:
	arrayName[index-0] = value1; 
	arrayName[index-1] = value2; 
	:::
	arrayName[index-N] = valueN;
	grades[0]='O';
	grades[1]='E';
	grades[2]='A';
	grades[3]='P';
	grades[4]='F';
	
datatype arrayName[] = {value1, value2,...,valueN};

---------------------------
int nums[10] = {1,5,3,2,8};
printf("%d", nums[3]); // 2
printf("%d", nums[4]); // 8
printf("%d", nums[5]); // 0
printf("%d", nums[9]); // 0
printf("%d", nums[10]); // gives garbage value in C

int nums2[] = {1,5,3,2,8}; // By default takes size as 5 from the numbers of values
printf("%d", nums2[3]); // 2
printf("%d", nums2[4]); // 8
printf("%d", nums2[5]); // gives garbage value in C
printf("%d", nums2[9]); // gives garbage value in C
printf("%d", nums2[10]);// gives garbage value in C
--------------------------------

How to find size of an array?
	int nums[5] = {1,5,3,2,8};
    printf("One array element size in bytes : %d\n", sizeof(nums[0]));
    printf("Array size in bytes : %d\n", sizeof(nums));
    int size = sizeof(nums)/sizeof(nums[0]);
    printf("Array size(total element) :%d \n", size);
Output:
One array element size in bytes : 4
Array size in bytes : 20
Array size(total element) :5 


Q1. Write a program print all the numebrs in an array.

int nums[5]={2,3,1,8,7};
printf("%d ", nums[0]);
printf("%d ", nums[1]);
printf("%d ", nums[2]);
printf("%d ", nums[3]); 
printf("%d ", nums[4]);

for(int i=0; i<5; i++){
	printf("%d ", nums[i]);
}

Q2. Write a program read N numbers in an array and then print all.
Take number of elements as input N
Read N numbers of elements.
Print all N numbers.
#include <stdio.h>
int main() {
    int N, nums[100];
    printf("Enter number of elements:");
    scanf("%d", &N); // 5
    
    printf("Enter all %d elements:\n", N);
    for(int i=0; i<N; i++){
        scanf("%d", &nums[i]); // 5 8 7 3 2
    }
    
    printf("Array elements: ");
    for(int i=0; i<N; i++){
        printf("%d ", nums[i]);
    }
    return 0;
}

Q.3 Write a program to find the total sum, even sum and odd sum of all elements in an array.
#include <stdio.h>
int main() {
    int N, nums[10];
    printf("Enter number of elements:");
    scanf("%d", &N); // 5
    
    printf("Enter all %d elements:\n", N);
    for(int i=0; i<N; i++){
        scanf("%d", &nums[i]); // 5 8 7 3 2
    }
    int total_sum = 0;
    int even_sum = 0;
    int odd_sum= 0;
    for(int i=0; i<N; i++){
        total_sum = total_sum + nums[i];
        if(nums[i] % 2 == 0){
           even_sum = even_sum + nums[i]; 
        }else{
            odd_sum = odd_sum + nums[i];
        }
    }
    printf("\nTotal Sum: %d", total_sum);
    printf("\nEven Sum: %d", even_sum);
    printf("\nOdd Sum: %d", odd_sum);
    return 0;
}
Q.4 Write a program to search an element in an array.
Q.5 Sort an array
// 5 8 7 3 2
// 2 3 5 7 8 <-- Sorted in ascending order

--------------------------2D array----
3 5 7
2 6 9
1 0 8

3*3 = 9
------
3 5 7
2 6 9

2*3 = 6


	
	
	
	
	
	
	
	
	
	
	
