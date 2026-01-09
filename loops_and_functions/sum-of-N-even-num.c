/*program:4 Sum of First N Even Numbers
2 + 4 + 6 + ...
ITERATIVE APPROACH*/
#include <stdio.h>
int sumEvenIterative(int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = sumEvenIterative(n);
    printf("The sum of the first %d even numbers is: %d\n",n,sum);
    return 0;
}
int sumEvenIterative(int n) 
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 2*i;  
    }
    return sum;
}

