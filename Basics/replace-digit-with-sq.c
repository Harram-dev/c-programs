//Program 4:
//Input a five-digit number and form a new number by replacing each digit with its square (only last digit if the square is two-digit)
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a 5-digit number.....");
	scanf("%d",&n);
	int ud=n%10;
	int squd=(ud*ud)%10;
	n=n/10;
	int td=n%10;
	int sqtd=(td*td)%10;
	n=n/10;
	int hd=n%10;
	int sqhd=(hd*hd)%10;
	n=n/10;
	int thd=n%10;
	int sqthd=(thd*thd)%10;
	int tthd=n/10;
	int sqtthd=(tthd*tthd)%10;
	int new_number=sqtthd*10000+sqthd*1000+sqhd*100+sqtd*10+squd;
	printf("New Number:%d",new_number);
	return 0;
}

