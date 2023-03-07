// C program to check is given number is palindrome number or not
// 123321 same from back and start

#include <stdio.h>

void checkNum(int A);

int main()
{
    int num = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    checkNum(num);

    return 0;
}

void checkNum(int A)
{
    int reverse = 0, rem = 0;

    while (A != 0)
    {
        rem = A % 10;
        reverse = reverse * 10 + rem;
        A = A / 10;
    }

    if (reverse == A)
    {
        printf(" It's A Paradrome Number");
    }
    else
    {
        printf(" It's not A Paradrome Number");
    }
}