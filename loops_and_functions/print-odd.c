/*program2:Print Odd Numbers from 1 to N
Same, but start at 1 or adjust.
ITERATIVE APPROACH */
#include <stdio.h>
void printONiterative(int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printONiterative(n);
    return 0;
}
void printONiterative(int m) 
{
    for (int i = 1; i <= m; i += 2)
    {
        printf("%d\n", i);
    }
}

