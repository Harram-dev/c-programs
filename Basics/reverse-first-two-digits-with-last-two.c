//Program 5:
//Input a five-digit number and reverse the positions of the first two digits with the last two digits
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a 5-digit number....");
	scanf("%d",&n);
	int first2digits=n/1000;
	n=n%1000;
	int middledigit=n/100;
	int last2digits=n%100;
	int new_number=last2digits*1000+middledigit*100+first2digits;
	printf("New Number:%d",new_number);
	return 0;
}

