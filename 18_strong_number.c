// C program to Check Whether a number is Strong number or not
#include <stdio.h>

void checkNum(int num);


int main()
{
    int num = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    checkNum(num);
    return 0;
}

void checkNum(int num)
{
    int digit = num, rem = 0, sum = 0, fact = 1;

    while (digit != 0)
    {
        rem = digit % 10;
        fact = 1;
        for (int i = rem; i >= 1; i--)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        digit = digit / 10;
    }

    if (sum == num)
    {
        printf("%d is a strong number", num);
    }
    else
    {
        printf("%d is not a strong number", num);
    }
}


/*
 rem = 5
*/