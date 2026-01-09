/*program:11 Reverse a Number
Problem: Reverse an integer using recursion.
ITERATIVE APPROACH*/
#include <stdio.h>
int reverseNumberIterative(int);
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number is: %d\n", reverseNumberIterative(n));
    return 0;
}
int reverseNumberIterative(int n) 
{
    int reversed = 0;
    while (n != 0) 
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

