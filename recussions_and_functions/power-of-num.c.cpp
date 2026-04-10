/*program:13 Power Function
Problem: Compute a^b using recursion.
RECURSIVE APPROACH*/
#include <stdio.h>
long long powerRecursive(int, int);
int main() 
{
    int a, b;
    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);
    printf("%d raised to the power of %d is: %lld\n", a, b, powerRecursive(a, b));
    return 0;
}
long long powerRecursive(int a, int b) 
{
    if (b == 0) 
    {
        return 1; 
    }
    return a * powerRecursive(a, b - 1); 
}

