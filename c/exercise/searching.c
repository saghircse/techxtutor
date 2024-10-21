Searching:
---------------------------------------

int main(){
	int N, nums[20], x;
    printf("Enter number of elements:");
    scanf("%d", &N); // 5
    
    printf("Enter all %d elements:\n", N);
    for(int i=0; i<N; i++){
        scanf("%d", &nums[i]); // 5 8 7 3 2
    }
	
	printf("Enter an element to search: ");
	scanf("%d", &x); // 3
	
	// Function to search x in nums array
	int found = search(nums, N, x);
	
	if(found == 1){
		printf("%d is found.", x);
	}else{
		printf("%d is not found.", x);
	}

	return 0;
}


// Function to search an element `x` in an array `nums` having `N` elements.
// Returns 0 or 1 (0 -> not found, 1=found)
int search(int nums[], int N, int x){	
	int found=0;
	for(int i=0; i<N; i++){
		if(nums[i] == x){
			found=1;
			break;
		}
	}
	return found;
}

// ==================================
1. Linear search:
6 8 7 3 2
5 --> 5 times in worst case
n --> n times in worst case
 Level : easy
2. Binary search in 1D array
	-> Works on sorted data
	-> Divide and concur
	
2.1 Binary search using recursion
	
total numbers:
2 3 5 7 9 
Level : medium

3. Binary search in a 2D array (Level : hard)
2	3	4
6	8	9
11	13	19

4. Check if a number is perfect square or not.(Level : medium)
sqrt(16) -> 4 , therefor 16 is perfect square.
sqrt(20) -> 4.xxx, 20 is not a perfect square.

