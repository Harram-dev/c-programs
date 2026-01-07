/*Program 4:Write a C program that checks whether a given year is a leap year or not.
A year is a leap year if it is divisible by 4 but not by 100, or if it is divisible by 400.
The program should take the year as input and display whether it is a leap year.*/
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year...");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				printf("%d is a Leap Year",year);
			}
			else
			{
				printf("%d is not a Leap Year",year);
			}
			
		}
		else
		{
			printf("%d is a Leap Year",year);
		}
	}
	else 
	{
		printf("%d is not a Leap YEar",year);
	}

	return 0;
}

