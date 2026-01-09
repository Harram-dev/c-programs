/*program:5 Sum of First N Odd Numbers
1 + 3 + 5 + ...
ITERATIVE APPROACH*/
#include <stdio.h>
int sumOddIterative(int);
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = sumOddIterative(n);
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}
int sumOddIterative(int n) 
{
    int sum = 0;
    int odd = 1;
    for (int i = 1; i <= n; i++) 
	{
        sum += odd;  
        odd += 2;  
    }
    return sum;
}

