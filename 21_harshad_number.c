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
   int rem = 0 , num = A,sum =0;

   while (num!=0)
   {
    rem = num % 10;
      sum = sum + rem;
      num/= 10;
   }
   if (A % sum == 0)
   {
     printf("It's a Harshad number");
   }
   else
   {
      printf("It's not a Harshad number");
   }
   
}
