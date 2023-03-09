// C Program to Check Perfect Number or Not
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
    int sum = 0;
    for (int i = 1; i < A; i++)
    {
        if (A % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == A)
    {
        printf("%d Is a perfect number", A);
    }
    else
    {
         printf("%d Is not a perfect number", A);
    }
}
