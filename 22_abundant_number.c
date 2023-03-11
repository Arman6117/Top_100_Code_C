//Abundant Number or Not in C Program
//The sum of its proper divisors is greater than the number itself
// The difference between these two values is called the abundance.

// C Program to check whether a number is Harshad number or not

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
   int divs =0;

   for (int i = 1; i < A; i++)
   {
     if (A % i == 0)
     {
        divs += i;
     }
     
   }
if (divs > A)
{
    printf("%d is an Abundent number", A);
}
else
{
    printf("%d is not an Abundent number", A);
}
}
