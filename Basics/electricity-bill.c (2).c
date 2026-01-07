/*Program 3:Write a C program to calculate an electricity bill based on the number of units consumed.
 The billing should follow a slab system where the first 100 units are charged at Rs. 5 per unit,
the next 100 units (101-200) at Rs. 7 per unit, and any units above 200 are charged at Rs. 10 per unit.
The program should take the number of units as input and print the total bill amount.*/
#include<stdio.h>
int main()
{
	int units;
	float bill;
	printf("Enter the number of units consumed...");
	scanf("%d",&units);
	if(units<=100)
	{
		bill=units*5;
	}
	else
	if(units<=200)
	{
		bill=100*5+(units-100)*7;
	}
	else
	{
		bill=100*5+100*7+(units-200)*10;
	}
	printf("Your Bill is:Rs.%f",bill);
	return 0;
}

