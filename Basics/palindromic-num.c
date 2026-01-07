#include<stdio.h>
int main()
{
	int on;
	printf("Enter a 5-digit number....");
	scanf("%d",&on);
	int n=on;
	int ud=n%10;
	n=n/10;
	int td=n%10;
	n=n/10;
	int hd=n%10;
	n=n/10;
	int thd=n%10;
	int tthd=n/10;
	int rev=ud*10000+td*1000+hd*100+thd*10+tthd;
	if(on==rev)
	{
	printf("The number is palindromic");
	}
	else
	{
	printf("The number is non-palindromic");
	}
	return 0;
}

