#include <stdio.h>

void checkNum(int A);

int main()
{
   int num = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   if (num <= 1)
   {
      printf("%d is not a prime number", num);
   }
   else
   {
      checkNum(num);
   }
   return 0;
}

void checkNum(int A)
{
   int i, count = 0;

   for (i = 2; i < A; i++)
   {
      if (A % i == 0)
      {
         count++;
      }
   }

   if (count == 0)
   {
      printf("%d is a prime number", A);
   }
   else
   {
      printf("%d is not a prime number", A);
   }
}


/*
    count = 0 i = 2 
    loop A = 2
          
     i = 2  i < A               
  
      2<2 (false)
  
  count = 0 (prime)
   
  A = 6 

  i = 2 i < A = 2 < 6
  
  6 % 2 == 0
  count = 1

  2nd iteration

  i = 3 

  6 % 3 == 0
  count == 2

  3rd iteration

  i = 4
  
  6 % 4 == 2
  false loop breaks

 if count == 0 then prime
 but count is now is 2 means
 not prime

*/









/*
The program starts by asking the user to enter a number.

The number is then passed to the function checkNum().

The function checkNum() checks if the number is less than or equal to 1, and if it is, it prints "Not a prime number".

If the number is greater than 1, the function enters a loop that runs from 2 to the number - 1.

In each iteration of the loop, the function checks if the current number is a divisor of the input number. If it is, it adds the divisor to a variable called count.

After the loop finishes, the function checks if the count is equal to 0. If it is, it means that the input number is a prime number, and the function prints "Prime number". If it isn't, it means that the input number is not a prime number, and the function prints "Not a prime number".




*/