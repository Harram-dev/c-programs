//Program 6:
//Input a four-digit number and form a new number by doubling each digit and taking only the unit place of the result
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a 4-digit number...");
	scanf("%d",&n);
	int ud=n%10;
	int dud=(2*ud)%10;
	n=n/10;
	int td=n%10;
	int dtd=(2*td)%10;
	n=n/10;
	int hd=n%10;
	int dhd=(2*hd)%10;
	int thd=n/10;
	int dthd=(2*thd)%10;
	int new_number=dthd*1000+dhd*100+dtd*10+dud;
	printf("New Number:%d",new_number);
	return 0;
}

