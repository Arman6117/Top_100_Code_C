// C program to check the given number is armstrong number or not
#include <stdio.h>
#include <math.h>

void checkNum(int A);
int main()
{
    int num = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    checkNum(num);

    return 0;
}

void checkNum(int A) // 153
{                    
    // 1] first count the how many digits there

    int numLength = 0;

    while (A!= 0)
    {
       A = A / 10; // 3 5 1 = 0
        numLength++;            // 3
    }
    // Count 3

    //   2] multiply each digit with number of digit and add them
   
    int number = A, rem = 0, result = 0;
   
    while (number != 0)
    {
        rem = number % 10; // 153 =3 // 5
        result = pow(rem,numLength)+result; // 3^3 = 27 // 
        number = number/10;// 15
    }
    //  3] check the result is equal to the actual number

    if (result == A)
    {
        printf("It'a armstrong number");
    }
    else
    {
        printf("It's not");
    }
}
/*
   1] first count the how many digits there
   2] power each digit with number of digit and add them
   3] check the result is equal to the actual number

*/