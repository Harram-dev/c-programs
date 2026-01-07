//Program 10:
//Input a four-digit number and output the number formed by interchanging the second and third digits
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
	int new_number=thd*1000+td*100+hd*10+ud;
	printf("New Number:%d",new_number);
	return 0;
}

