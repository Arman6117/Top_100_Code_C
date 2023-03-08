// // C program to check the given number is armstrong number or not
// #include <stdio.h>
// #include <math.h>

// void checkNum(int A);
// int main()
// {
//     int num = 0;

//     printf("Enter a number ");
//     scanf("%d", &num);

//     checkNum(num);

//     return 0;
// }

// void checkNum(int A) // 153
// {                    
//     // 1] first count the how many digits there

//     int numLength = 0, number = A, rem = 0, result = 0;;

//     while (number!= 0)
//     {
//        number = number/ 10; // 3 5 1 = 0
//         numLength++;            // 3
//     }
//     // Count 3

//     //   2] multiply each digit with number of digit and add them
   
  
//    number = A;
//     while (number != 0)
//     {
//         rem = number % 10; // 153 =3 // 5
//         result = result+ pow(rem,numLength); // 3^3 = 27 // 
//         number = number/10;// 15
//     }
//     //  3] check the result is equal to the actual number

//     if (result == A)
//     {
//         printf("It'a armstrong number");
//     }
//     else
//     {
//         printf("It's not");
//     }
// }
// /*
//    1] first count the how many digits there
//    2] power each digit with number of digit and add them
//    3] check the result is equal to the actual number

// */

#include <stdio.h>
#include <math.h>
 int order(int x)
 {
  int len = 0;
  while (x)
  {
    len++;
    x = x/10;
  }
  return len;
 }
  int getArmstrongSum(int num, int order){

  if(num == 0)
  return 0;

  int digit = num % 10;

  return pow(digit, order) + getArmstrongSum(num/10, order);
 }


// Driver Code
int main ()
{
  int num, len;
  num=1634;
  printf("The number is:%d\n",num); 

  // function to get order(length)
  len = order(num);

  // check if Armstrong
  if (num == getArmstrongSum(num, len))
    printf("%d is Armstrong", num);
  else
    printf("%d is Not Armstrong", num);
 
 }
