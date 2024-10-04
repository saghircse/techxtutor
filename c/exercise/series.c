1. Write a program to compute the sum of series 1^2/1! + 2^2/2! + 3^2/3! + ..+ n^2/n!

t^2/t! => square(t)/fact(t)

#include<stdio.h>

int fact(int n){
	int f=1; 
	if(n==0){
		return 1;
	}
	for(int i=1; i<=n; ++){
		f = f*i;
	}
	return f;
}

int main(){
	int n;
	printf("Enter number of terms of the series");
	scanf("%d",&n);
	sumOfSeriesX(n);
	
}

void sumOfSeriesX(int n){
	float sumx=0.0;
	for(int i=1; i<=n; i++){
		sumx = sumx + (1.0*i*i)/fact(i);
	}
	printf("Sum of series : %f", sumx)
}
=====================================================
1. 1 + 2 + 3 + ..
	int sumx=0.0;
	for(int i=1; i<=n; i++){
		sumx = sumx + i;
	}
	
2. 1^2 + 2^2 + 3^2 + ..
	int sumx=0.0;
	for(int i=1; i<=n; i++){
		sumx = sumx + i*i;
	}
	
3. 1! + 2! + 3! + ..
	int sumx=0;
	for(int i=1; i<=n; i++){
		sumx = sumx + fact(i);
	}

4. 1^2/1! + 2^2/2! + 3^2/3! + ..

	float sumx=0.0;
	for(int i=1; i<=n; i++){
		sumx = sumx + i*i/fact(i);
	}
