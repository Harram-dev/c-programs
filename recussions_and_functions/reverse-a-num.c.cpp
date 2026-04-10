/*program:11 Reverse a Number
Problem: Reverse an integer using recursion.
RECURSIVE APPROACH*/
#include <stdio.h>
int reverseNumberRecursive(int, int);
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number is: %d\n", reverseNumberRecursive(n, 0));
    return 0;
}
int reverseNumberRecursive(int n, int reversed) 
{
    if (n == 0)
        return reversed;
    reversed = reversed * 10 + n % 10; 
    return reverseNumberRecursive(n / 10, reversed); 
}

