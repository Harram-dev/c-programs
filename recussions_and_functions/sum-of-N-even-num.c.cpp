/*program4: Sum of First N Even Numbers
2 + 4 + 6 + ...
RECURSIVE APPROACH*/
#include <stdio.h>
int sumEvenRecursive(int, int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = sumEvenRecursive(1, n);
    printf("The sum of the first %d even numbers is: %d\n", n, sum);
    return 0;
}
int sumEvenRecursive(int current, int n) 
{
    if (current > n)
    {
        return 0;
    }
    return 2 * current + sumEvenRecursive(current + 1, n);
}

