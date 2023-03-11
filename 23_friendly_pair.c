// C Program to check if the given two numbers are friendly pair or not
// C Program to check whether a number is Harshad number or not

#include <stdio.h>

void checkNum(int A, int B);
int main()
{
    int num1 = 0, num2 = 0;

    printf("Enter a pair of number\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    checkNum(num1, num2);
    return 0;
}

void checkNum(int A, int B)
{
    int ratio = 0, sumA = 0, sumB = 0;

    for (int i = 1; i < A; i++)
        
        {

            if (A % i == 0)
            {
                sumA += i;
            }
        }

    for (int i = 1; i < B; i++)
    {
        if (B % i == 0)
        {
            sumB += i;
        }
    }


    if (sumA / A == sumB/ B)
    {
       printf("It's a friendly pair");
    }
    else
    {
        printf("It's not");
    }
}
