//Program 2:
//Input a six-digit number and display the number formed by reversing only the last four digits
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a 6-digit number....");
	scanf("%d",&n);
	int ud=n%10;
	n=n/10;
	int td=n%10;
	n=n/10;
	int hd=n%10;
	n=n/10;
	int thd=n%10;
	n=n/10;
	int tthd=n%10;
	int hthd=n/10;
	int rev_number=hthd*100000+tthd*10000+ud*1000+td*100+hd*10+thd;
	printf("Reversed Number:%d",rev_number);
 return 0;
}

