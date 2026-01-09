/*program:8 Factorial of a Number
Problem: Compute n! using recursion.
ITERATIVE APPROACH*/
#include <stdio.h>
long long factorialIterative(int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %lld\n", n, factorialIterative(n));
    return 0;
}
long long factorialIterative(int n) 
{
    long long result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

