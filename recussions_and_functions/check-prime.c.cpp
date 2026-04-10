/*program:15 . Check if Number is Prime (Recursive)
Check divisibility up to sqrt(n).
RECURSIVE APPROACH*/
#include <stdio.h>
#include <math.h>
int isPrimeRecursive(int, int);
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
        if (isPrimeRecursive(n, 2)) 
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

int isPrimeRecursive(int n, int i) 
{
    if (i > sqrt(n)) 
    {
        return 1;
    }
    if (n % i == 0) 
    {
        return 0; 
    }
    return isPrimeRecursive(n, i + 1); 
}

