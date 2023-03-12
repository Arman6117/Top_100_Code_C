// Octal To Binary Conversion | C Program
// First, convert Octal to Decimal and then Decimal to Binary.

#include <stdio.h>
#include <math.h>

void convertOctal(int A);
void convertBinary(int A);

int main () 
{
 long int octal = 0;

 printf("Enter octal number: ");
 scanf("%d", &octal);
 
 convertOctal(octal );
 return 0;
}

void convertOctal(int A)
{
   int decimal = 0, i =0,digit = 0;

   while (A !=0)
   {
     digit = A % 10;
     decimal += digit*pow(8,i);
     A /= 10;
     i++;
   }
   convertBinary(decimal);

}

void convertBinary(int A)
{
    int binary[32],i=0;

    while (A !=0)
    {
        binary[i] = A % 2;
        A /= 2;
        i++;
    }
    printf("Binary for given octal number is: ");
  for (int j = i -1; j>=0; j--)
  {
    printf("%d", binary[j]);
  }
  
}