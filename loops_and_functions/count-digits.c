/*program:12 Count Digits
Problem: Count how many digits are in a number.
ITERATIVE APPROACH*/
#include <stdio.h>
int countDigitsIterative(int);
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number of digits in %d is: %d\n", n, countDigitsIterative(n));
    return 0;
}
int countDigitsIterative(int n) 
{
    int count = 0;
    if (n == 0) {
        return 1;  
    }
    while (n != 0) 
    {
        n /= 10;  
        count++;  
    }
    return count;
}

