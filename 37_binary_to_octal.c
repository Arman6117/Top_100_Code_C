// Binary To Octal Conversion | C Program
// Converting Binary to Decimal and then Decimal to Octal

#include <stdio.h>
#include <math.h>
void convertNumBinary(long int A);
void convertNumOctal(long int A);
int main () 
{
 long int binary = 0;

 printf("Enter binary number: ");
 scanf("%d", &binary);
 
 convertNumBinary(binary);
 return 0;
}

void convertNumBinary(long int A)
{
    // Converting binary to decimal

    int decimal = 0,digit = 0, i =0;

    while (A != 0)
    {
        digit  = A % 10;
        decimal += digit* pow(2,i);
        A /= 10;
        i++;
    }
    
    // Converting decimal to octal
     convertNumOctal(decimal);
   
}
void convertNumOctal(long int A)
{
   int num = A, octal[32], i =0;

   while (num !=0)
   {
      octal[i] = num % 8;
      num /= 8;
      i++;
   }
   
   printf("The octal conversion for %d is: ", A);
   for (int j = i -1; j>= 0; j--)
   {
     printf("%d", octal[j]);
   }
   
}