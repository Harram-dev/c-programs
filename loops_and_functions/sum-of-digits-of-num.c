/*program:10 Sum of Digits
Problem: Input a number and return the sum of its digits.
ITERATIVE APPROACH*/
#include <stdio.h>
int sumOfDigitsIterative(int);
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is: %d\n", n, sumOfDigitsIterative(n));
    return 0;
}
int sumOfDigitsIterative(int n) 
{
    int sum = 0;
    while (n != 0) 
    {
        sum += n % 10; 
        n /= 10;        
    }
    return sum;
}

