/*. Sum of First N Odd Numbers
1 + 3 + 5 + ...
RECURSIVE APPROACH*/
#include <stdio.h>
int sumOddRecursive(int, int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = sumOddRecursive(1, n);
    printf("The sum of the first %d odd numbers is: %d\n",n,sum);
    return 0;
}
int sumOddRecursive(int current, int n) 
{
    if (n == 0) 
	{
        return 0; 
    }
    return current + sumOddRecursive(current + 2, n - 1);
}

