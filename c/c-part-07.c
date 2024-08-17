Array:
	-> Used to store multiple values in a single variable,
		instead of declaring sparate variable for each value.
	-> Homogeneous : Collection of same type of elements.
	-> Indexed based which starts with zero.
		-> Values are stored sequentially starting with index 0.
		-> Provides random acces using index
	-> Fixed or constant size
	-> Contiguous memory allocation
	
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
int nums[5] = {1,5,3,2,8};
int nums[] = {1,5,3,2,8}; // Takes size of array from the numbers of values
--------------------------------



	
