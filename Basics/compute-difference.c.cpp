//Program 9:
//Input a five-digit number and compute the difference between the sum of the first three digits and the last two digits
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a 5-digit number....");
	scanf("%d",&n);
	int ud=n%10;
	n=n/10;
	int td=n%10;
	n=n/10;
	int hd=n%10;
	n=n/10;
	int thd=n%10;
	int tthd=n/10;
	int sum3digits=tthd+thd+hd;
	int sum2digits=td+ud;
	int diff=sum3digits-sum2digits;
	printf("Difference:%d",diff);
	return 0;
}

