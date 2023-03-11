// Decimal To Octal Conversion | C Program

#include <stdio.h>

void convertNum(int A);
int main()
{
    int num = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    convertNum(num);
    return 0;
}

void convertNum(int A)
{
    int octal[32], i = 0, num = A;

    while (num > 0)
    {
        octal[i] = num % 8;
        num /= 8;
        i++;
    }

    printf("Decimal to octal for %d is: ", A);

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
}