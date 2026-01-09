/*program:9 Fibonacci Series
Problem: Print first N Fibonacci numbers using recursion.
ITERATIVE APPROACH*/
#include <stdio.h>
void fibonacciIterative(int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms: \n", n);
    fibonacciIterative(n);
    return 0;
}
void fibonacciIterative(int n) 
{
    long long a = 0, b = 1, next;
    for (int i = 0; i < n; i++) 
    {
        if (i <= 1)
            next = i; 
        else 
        {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%lld ", next);
    }
    printf("\n");
}

