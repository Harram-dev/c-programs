/*program3:Sum of First N Natural Numbers
RECURSIVE APPROACH */
#include <stdio.h>
int sumRecursive(int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = sumRecursive(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
int sumRecursive(int n) 
{
    if (n == 0)
    {
        return 0;  
    }
    return n + sumRecursive(n - 1);
}

