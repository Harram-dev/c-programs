/*program:9 Fibonacci Series
Problem: Print first N Fibonacci numbers using recursion.
RECURSIVE APPROACH*/
#include <stdio.h>
void fibonacciRecursive(int, int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms: \n", n);
    fibonacciRecursive(n, 0);
    return 0;
}
void fibonacciRecursive(int n, int current) 
{
    static long long a = 0, b = 1;
    if (current == n) 
        return;

    if (current <= 1) 
    {
        printf("%lld ", current); 
    } 
    else 
    {
        long long next = a + b;
        a = b;
        b = next;
        printf("%lld ", next);
    }
    fibonacciRecursive(n, current + 1);
}

