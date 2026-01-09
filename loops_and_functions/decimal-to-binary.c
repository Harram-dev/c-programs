/*program:6 Decimal to Binary (without arrays)
Print binary using recursion and %2.
ITERATIVE APPROACH*/
#include <stdio.h>
void printBinary(int);
int main() 
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary representation: ");
    printBinary(n);
    printf("\n");
    return 0;
}
void printBinary(int n) 
{
    int binaryDigit;
    if (n == 0) {
        printf("0");
        return;
    }
    int firstBitPrinted = 0;
    while (n > 0) 
	{
        binaryDigit = n % 2;
        if (binaryDigit == 1 || firstBitPrinted) 
		{
            printf("%d", binaryDigit);
            firstBitPrinted = 1;
        }
        
        n = n / 2;
    }
}

