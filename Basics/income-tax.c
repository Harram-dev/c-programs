/*Program 7:Write a C program that calculates income tax for an individual based .............................
tax amount and display it.*/
#include<stdio.h>
int main()
{
	int type;
	float income,tax;
    printf("Enter annual income:");
    scanf("%f", &income);
    printf("Enter employment type (1 for Salaried, 2 for Self-employed):");
    scanf("%d",&type);
	tax=0.0;
	if(type == 1)
	{
		 if(income<=300000)
		 {
		    tax=0;
		 }
		 else
		 if(income<=600000)
		 {
		 	tax=(income-300000)*0.05;
		 }
		 else
		 if(income<=1000000)
		 {
		 	tax=(300000*0.05)+(income - 600000)*0.10;
		 }
		 else
		 {
		 	tax=(300000*0.05)+(400000 * 0.10)+(income - 1000000)*0.15;
		 }
	}
	else
	if(type==2)
	{
		if(income<=300000)
		{
			tax=0;
		}
		else
		if(income<=500000)
		{
			tax=(income-300000)*0.08;
		}
		else
		if(income<=1000000)
		{
			tax=(200000*0.08)+(income-500000)*0.12;
		}
		else
		{
		    tax=(200000*0.08)+(500000*0.12)+(income-1000000)*0.18;
		}
	}
	else
	{
	printf("Invalid employment type\n");
	}
	printf("Your Income Tax is:%.2f\n",tax);
	return 0;
}

