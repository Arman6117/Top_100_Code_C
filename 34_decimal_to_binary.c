// Decimal To Binary Conversion | C Program

#include <stdio.h>

void convertNum (int A); 
int main () 
{
  int num = 0;

  printf("Enter a decimal number: ");
  scanf("%d", &num);

  convertNum(num);
 return 0;
}

void convertNum (int A) 
{
    int binary[32]; // array for storing binary
    int i = 0; // using as array index
    int num =A;
    // decimal to binary = every digit of num % 2 == n

    while (A > 0)
    {
       binary[i] = A % 2;
       A /= 2;
       i++;
    }
    
    // Printing binary array in rever5se order
  printf("Binary for %d is: ", num);
    for (int j = i-1; j>=0; j--)
    {
        printf("%d", binary[j]);
    }
    

}