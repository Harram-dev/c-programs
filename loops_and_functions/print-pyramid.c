/*program:7 Print a Pyramid / Triangle
Problem: Print a star pyramid of height n using recursion.
ITERATIVE APPROACH*/
#include <stdio.h>
void printPyramidIterative(int);
void printSpaces(int);
void printStars(int);
int main() 
{
    int n;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);
    printPyramidIterative(n);
    return 0;
}
void printPyramidIterative(int n) 
{
    for (int i = 1; i <= n; i++) 
	{
        for (int j = 0; j < n - i; j++) 
		{
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) 
		{
            printf("*");
        }
        printf("\n");
    }
}



