// Automorphic Number or Not | C Program

#include <stdio.h>

void checkNum(int A);
int main () 
{
  int num = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    checkNum(num);
 return 0;
}

void checkNum(int A)
{
    int rem = 0,  sqr =0,i= 0;
   
    
   rem = A % 10;
     sqr = A * A; // 625
     sqr = sqr % 10; // 5

     if (sqr == rem)
     {
        printf("Automorphic number\n");
     }
     else
     {
        printf("Not a automorphic");
     }
     
   
    
}
