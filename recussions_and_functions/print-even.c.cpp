/*program1:Print Even Numbers from 1 to N
Skip by 2 using recursion.
RECURSIVE APPROACH */
#include <stdio.h>
void printENrecursive(int, int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printENrecursive(1, n);
    return 0;
}
void printENrecursive(int current, int m) 
{
    if (current > m) 
	{
        return;
    }
    printf("%d\n", 2*current);
    printENrecursive(current+1,m);
}

