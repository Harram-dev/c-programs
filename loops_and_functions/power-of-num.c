/*program:13 Power Function
Problem: Compute a^b using recursion.
ITERATIVE APPROACH*/
#include <stdio.h>
long long powerIterative(int, int);
int main() 
{
    int a, b;
    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);
    printf("%d raised to the power of %d is: %lld\n", a, b, powerIterative(a, b));
    return 0;
}
long long powerIterative(int a, int b) 
{
    long long result = 1;
    for (int i = 1; i <= b; i++) 
    {
        result *= a; 
    }
    return result;
}

