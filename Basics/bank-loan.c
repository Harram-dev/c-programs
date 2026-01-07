/*Program 6:Write a C program that determines whether a customer is eligible for a bank loan ........., display 
a message explaining why the user is not eligible.*/
#include<stdio.h>
int main()
{
    int age,loan_type;
    float monthly_income,loan_amount;
    float interest_rate = 0.0;
    float interest_amount = 0.0;
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter monthly income:");
    scanf("%f",&monthly_income);
    printf("Enter loan amount requested:");
    scanf("%f",&loan_amount);
    printf("Enter loan type:\n");
    printf("1.Home\n");
    printf("2.Car\n");
    printf("3.Personal\n");
    scanf("%d",&loan_type);
    float max_loan=20.0*monthly_income; 
    if(age>=21)
    {
    	if(monthly_income>=25000.0)
    	{
    		if(loan_amount<=max_loan)
    		{
    			if(loan_type==1)
    			{
    				if(age<=65)
    				{
    					interest_rate=0.075;
    					printf("You are eligible for HOME LOAN");
					}
					else
					{
						printf("You are not eligible for Home Loan.\nReason:Age>65");
						return 0;
					}
    	    	}
    	    	else
    	    	if(loan_type==2)
    	    	{
    	    		if(age<=60)
    	    		{
    	    			interest_rate=0.09;
    	    			printf("You are eligible for CAR LOAN");
					}
					else
					{
						printf("You are not eligible for Caar Loan.\nReason:Age>60");
						return 0;
					}
				}
				else
				if(loan_type==3)
				{
					if(age<=55)
					{
						interest_rate=0.125;
						printf("You are eligible for PERSONAL LOAN");
					}
					else
					{
						printf("You are not eligible for Personal Loan.\nReason:Age>55");
						return 0;
					}
				}
				interest_amount=loan_amount*interest_rate;
    	        printf("\nApplicant Age:%d\n",age);
                printf("Monthly Income:Rs.%f\n",monthly_income);
                printf("Requested Loan:Rs.%f\n",loan_amount);
                printf("Interest Rate:%f%%\n",interest_rate*100.0);
                printf("One-Year Simple Interest:Rs.%f\n",interest_amount);
            }
			else
			{
				printf("You are not eligible for loan\nReason:Loan amount>Max loan\n");
			}
		}
		else
		{
			printf("You are not eligible for loan\n Reason:Monthly income<25000\n");
			
		}
	}
	else
	{
		printf("You are not eligible for loan\n Reason:Age<21");
	}
	return 0;
}

