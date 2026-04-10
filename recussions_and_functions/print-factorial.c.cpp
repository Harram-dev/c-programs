/*program:8 Factorial of a Number
Problem: Compute n! using recursion.
RECURSIVE APPROACH*/
#include <stdio.h>
long long factorialRecursive(int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %lld\n",n,factorialRecursive(n));
    return 0;
}
long long factorialRecursive(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

