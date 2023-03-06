// C program to check number is positive or negative

#include <stdio.h>

void checkNum(int A);

int main()
{
   int num = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   checkNum(num);
    return 0;
}

void checkNum(int A)
{
    if (A > 0)
    {
        printf("Number is positve");
    }
    else if (A < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Zero");
    }
}