//Program 8:
//Input a number in the format DDMMYY and print it in the format YYMMDD
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a 6-digit number in format DDMMYY...");
    scanf("%d",&n);
    int YY=n%100;
    n=n/100;
    int DD=n/100;
    int MM=n%100;
    int new_format=YY*10000+MM*100+DD;
    printf("Number in YYMMDD format:%06d",new_format);
	return 0;
}

