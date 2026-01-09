/*program:15 . Check if Number is Prime (Recursive)
Check divisibility up to sqrt(n).
ITETRATIVE APPROACH*/
#include <stdio.h>
#include <math.h>
int isPrimeIterative(int);
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) 
    {
        printf("%d is not a prime number.\n", n);
    }
    else 
    {
        if (isPrimeIterative(n)) 
        {
            printf("%d is a prime number.\n", n);
        }
        else 
        {
            printf("%d is not a prime number.\n", n);
        }
    }
    
    return 0;
}
int isPrimeIterative(int n) 
{
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

