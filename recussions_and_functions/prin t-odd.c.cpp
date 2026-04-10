/*program2:Print Odd Numbers from 1 to N
Same, but start at 1 or adjust.
RECURSIVE APPROACH */
#include <stdio.h>
void printONrecursive(int, int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printONrecursive(1, n);
    return 0;
}
void printONrecursive(int current, int m) 
{
    if (current > m)
    {
        return;
    }
    printf("%d\n", 2*current-1);
    printONrecursive(current+1, m);
}

