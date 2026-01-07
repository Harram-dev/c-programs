//Program 7:
//Input a five-digit number and print the middle three digits as a separate number
#include<stdio.h>
int main()
{
  int n;
	printf("Enter a 5-digit number....");
	scanf("%d",&n);
	n=n/10;
	int middle3digits=n%1000;
	printf("New Numbeer:%d",middle3digits);
	return 0;
}

