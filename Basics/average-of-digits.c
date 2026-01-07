//Program 3:
//Input a four-digit number and calculate the average of its digits
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a 4-digit number...");
	scanf("%d",&n);
	int ud=n%10;
	n=n/10;
	int td=n%10;
	n=n/10;
	int hd=n%10;
	int thd=n/10;
	float sum=thd+hd+td+ud;
	float avg=sum/4;
	printf("Average:%.01f",avg);
	return 0;
}

