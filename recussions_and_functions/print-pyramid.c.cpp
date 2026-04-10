/*program:7 Print a Pyramid / Triangle
Problem: Print a star pyramid of height n using recursion.
RECURSIVE APPROACH*/
#include <stdio.h>
void printPyramidRecursive(int, int);
void printSpaces(int);
void printStars(int);
int main() 
{
    int n;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &n);
    printPyramidRecursive(n, 1);
    return 0;
}
void printPyramidRecursive(int n, int i) 
{
    if (i > n) 
	{
        return; 
    }
    printSpaces(n - i);
    printStars(2 * i - 1);
    printf("\n");
    printPyramidRecursive(n, i + 1);
}
void printSpaces(int spaces) 
{
    if (spaces > 0) 
	{
        printf(" ");
        printSpaces(spaces - 1);
    }
}
void printStars(int stars) 
{
    if (stars > 0) 
	{
        printf("*");
        printStars(stars - 1);
    }
}

