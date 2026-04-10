/*program:6 Decimal to Binary (without arrays)
Print binary using recursion and %2.
RECURSIVE APPROACH*/
#include <stdio.h>
void printBinary(int);
int main() 
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n == 0) 
	{
        printf("Binary representation: 0\n");
    } 
	else 
	{
        printf("Binary representation: ");
        printBinary(n);
        printf("\n");
    }
    return 0;
}
void printBinary(int n) 
{
    if (n == 0) 
	{
        return;  
    }
    printBinary(n / 2);
    printf("%d", n % 2);
}

