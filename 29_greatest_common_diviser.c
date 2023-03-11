//C Program to find GCD Of Two Numbers
#include <stdio.h>
 
int findGCD(int A, int B);
int main () 
{
 
    int num1 = 0, num2 = 0, GCD = 0;;

    printf("Enter 2 numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    GCD = findGCD(num1,num2);
  
  printf("GCD of %d and %d is: %d", num1,num2,GCD);

 return 0;
}

int findGCD(int A,int B)
{
   int result = 1;

   for (int i = 1; i <= B || i<= A; i++)
   {
     if ((A % i == 0) && (B % i == 0))
     {
          result = i;
         
          
     }
      if ((A % i == 0) && (B % i == 0) && (i > result))
          {
            result = i;
          }
   }
   return result;
   
  

}
