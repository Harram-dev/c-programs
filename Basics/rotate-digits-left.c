//Program 1:
// Input a three-digit number and print the number formed by rotating its digits two places to the left
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a 3-digit number....");
	scanf("%d",&n);
	int ud=n%10;
	n=n/10;
	int td=n%10;
	int hd=n/10;
	int r_n=ud*100+hd*10+td;
	printf("Rotated Number:%d",r_n);
	return 0;
}

