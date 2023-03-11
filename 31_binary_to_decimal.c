//Binary To Decimal Conversion | C Program


// A decimal number can be attained by multiplying every digit of binary digit with a power of 2 and adding each multiplication outcome. The power of the integer starts from 0 and counts to n-1 where n is assumed as the overall digits of integers in binary numbers.

#include <stdio.h>
#include <math.h>

int convertNum(int A);

int main () 
{
     int binary = 0, num = 0;

    printf("Enter a Binary number: ");
    scanf("%d", &binary);
  
  num = convertNum(binary);

  printf("Binary conversion for %d is: %d", binary,num);
   

 return 0;
}

int convertNum(int A)
{
    int i = 0, decimal = 0,digit = 0;

    while (A != 0)
    {
        digit = A % 10;
        decimal += digit * pow(2,i);
        A /= 10;
        i++;
    }
    return decimal;
}
