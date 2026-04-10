/*program:14 Greatest Common Divisor (GCD)
Problem: Find GCD of two numbers.
RECURSIVE APPROACH*/
#include <stdio.h>
int gcdRecursive(int, int);
int main() 
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    printf("GCD of %d and %d is: %d\n", a, b, gcdRecursive(a, b));
    return 0;
}
int gcdRecursive(int a, int b) 
{
    if (b == 0) 
    {
        return a; 
    }
    return gcdRecursive(b, a % b);  
}

