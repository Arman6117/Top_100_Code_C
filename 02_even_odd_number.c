// C program to check number is even or odd

#include <stdio.h>

void checkNum(int A);

int main () 
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkNum(num);
 
 return 0;
}

void checkNum (int A)
{
    if ((A % 2) == 0)
    {
        printf("Number is even");
    }
    else 
    {
        printf("Number is odd");
    }
    
}
