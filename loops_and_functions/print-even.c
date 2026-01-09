/*program1:Print Even Numbers from 1 to N
Skip by 2 using recursion.
ITERATIVE APPROACH */
#include <stdio.h>
void printENiterative(int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printENiterative(n);
    return 0;
}
void printENiterative(int m) 
{
   
    for (int i = 2;i <= m;i += 2) 
    {
    	printf("%d\n", i);
	}
}


