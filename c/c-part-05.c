---------------------------------------------
user-1 : 25 unit, charge = 25 * 0.50 = 12.5
	total = charge + 20% of charge = 12.5 + (20*12.5)/100
	-----------------
user-2 : 120 unit, charge = 50 * 0.50 + 70 * 0.75
	total = charge + 20% of charge
	----------------
user-3 : 400 unit, charge = 50 * 0.50 + 100 * .75 + 100 * 1.20 + 150 * 1.50
	total = charge + 20% of charge
-------------------------------------------------
Write a C program to input electricity unit charges and 
calculate total electricity bill according to the given condition:
	For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill

-------------------------------------------------
#include<stdio.h>
int main(){
	int total_units;
	printf("Enter the electricity units:");
	scanf("%d", &total_units);
	float charge = 0;
	if(total_units<=50){
		charge = total_units * .50;
	}
	else if(total_units > 50 && total_units<=150)
	{
		charge = 50 * .50 + (total_units - 50) * .75;
	}
	else if(total_units > 150 && total_units <=250)
	{
		charge = 50 * .50 + 100 * .75 + (total_units - 150) * 1.20;
	}
	else
	{
		charge = 50 * .50 + 100 * .75 + 100 * 1.20 + (total_units - 250) * 1.50;
	}
	
	float total_charge = charge + (20*charge)/100;
	
	printf("Total charge for %d units electricity = %f", total_units, total_charge);
	
	return 0;
}

Enter the electricity units:50
Total charge for 50 units electricity = 30.000000
------------------
Enter the electricity units:200
Total charge for 200 units electricity = 192.000000
-------------------
Enter the electricity units:500
Total charge for 500 units electricity = 714.000000