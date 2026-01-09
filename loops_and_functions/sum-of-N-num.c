/*program3:Sum of First N Natural Numbers
ITERATIVE APPROACH */
#include <stdio.h>
int sumIterative(int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = sumIterative(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
int sumIterative(int n) 
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

