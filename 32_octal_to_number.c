// C Program for Octal To Decimal Conversion

//Octal to Decimal in C happens with the principle that a decimal number can be attained by multiplying every digit of octal number with a power of 2 and adding each multiplication outcome. The power of the integer starts from 0 and counts to n-1 where n is assumed as the overall digits of integers in octal numbers.

#include <stdio.h>
#include <math.h>
int convertNum(int A);
int main () 
{
 int octal = 0, num = 0;

    printf("Enter a octal number: ");
    scanf("%d", &octal);
  
  num = convertNum(octal);

  printf("octal conversion for %d is: %d", octal,num);
 return 0;
}
int convertNum(int A)
{
    int i = 0, decimal =0,base = 8,digit = 0;

    while (A != 0)
    {
        digit = A % 10;
        decimal += digit * pow(base,i);
        A /= 10;
        i++;
    }
    return decimal;
}