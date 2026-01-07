/*Program 5:Write a C program to calculate and categorize Body Mass Index (BMI).
The user should input their weight in kilograms and height in meters. The program calculates BMI using 
the formula BMI = weight / (height * height) and then classifies it as "Underweight" if BMI < 18.5, 
"Normal" if BMI is between 18.5 and 24.9,"Overweight" if between 25 and 29.9, and "Obese" if 30 or above.*/
#include<stdio.h>
int main()
{
	float w,h,bmi;
	printf("Enter your weight in kgs...");
	scanf("%f",&w);
	printf("Enter your height in meters...");
	scanf("%f",&h);
	bmi=w/(h*h);
	if(bmi<18.5)
    {
        printf("Underweight\n");
    }
    else 
	if(bmi<25.0)
    {
        printf("Normal\n");
    }
    else 
	if(bmi<30.0) 
    {
        printf("Overweight\n");
    }
    else 
    {
        printf("Obese\n");
    }
	return 0;
}

