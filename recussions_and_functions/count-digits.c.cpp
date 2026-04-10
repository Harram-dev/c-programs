/*program:12 Count Digits
Problem: Count how many digits are in a number.
RECURSIVE APPROACH*/
#include <stdio.h>
int countDigitsRecursive(int);
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number of digits in %d is: %d\n", n, countDigitsRecursive(n));
    return 0;
}
int countDigitsRecursive(int n) 
{
    if (n == 0) 
    {
        return 0;  
    }
    return 1 + countDigitsRecursive(n / 10);  
}

