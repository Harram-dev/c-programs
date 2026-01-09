/*program:14 Greatest Common Divisor (GCD)
Problem: Find GCD of two numbers.
ITERATIVE APPROACH*/
#include <stdio.h>
int gcdIterative(int, int);
int main() 
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("GCD of %d and %d is: %d\n", a, b, gcdIterative(a, b));
    return 0;
}
int gcdIterative(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b; 
        a = temp;   
    }
    return a;  
}

