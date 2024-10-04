// Function to check prime.

Approach-1 : if n is not divided b/n numbers from 2 to n-1, then its prime.
	n=7, check if divided by 2,3,4,5,6 
int isPrime(int num){
	if(num<2)
	return 0;
	int i;
	for(i=2;i <= num-1;i++){ // n-2 times (if n=71, then loop will run 69 times)
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
	
Approach-2 : if n is not divided b/n numbers from 2 to n/2, then its prime.	
int isPrime(int num){
	if(num<2)
	return 0;
	int i;
	for(i=2;i <= num/2;i++){ // n/2-1 times (if n=71, then loop will run 34 times)
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}

Approach-3 : if n is not divided b/n numbers from 2 to sqrt(n), then its prime.
int isPrime(int num){
	if(num<2)
	return 0;
	int i;
	for(i=2;i*i<=num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
