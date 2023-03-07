// C program fo sumation of digits of a number

#include <stdio.h>

int addDigit(int A);

int main()
{
    int num = 0, results = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    results = addDigit(num);

    printf("The sum of digits of the %d is %d", num, results);
    return 0;
}

int addDigit(int A)
{
    int sum = 0;

    while (A != 0)
    {
        sum += A % 10;
        A = A / 10;
    }
    return sum;
}

