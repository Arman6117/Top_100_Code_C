// C Program to Print Factorial of a Number
// C Program to check whether a number is Harshad number or not

#include <stdio.h>

int factoNum(int A);
int main()
{
    int num = 0, factorial = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    factorial = factoNum(num);

    printf("Factorial is: %d", factorial);
    return 0;
}

int factoNum(int A)
{
   int facto = 1;

   for (int i = 1; i <= A; i++)
   {
     facto = facto *i;
   }
   
   return facto;


}
