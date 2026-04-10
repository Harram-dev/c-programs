/*program:10 Sum of Digits
Problem: Input a number and return the sum of its digits.
RECURSIVE APPROACH*/
#include <stdio.h>
int sumOfDigitsRecursive(int);
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is: %d\n", n, sumOfDigitsRecursive(n));
    return 0;
}
int sumOfDigitsRecursive(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    return (n % 10) + sumOfDigitsRecursive(n / 10); 
}
 
