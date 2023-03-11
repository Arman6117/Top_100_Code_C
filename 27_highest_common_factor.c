// C program to find highest common factor of 2 numbers

#include <stdio.h>

void findHCF(int A, int B);
int main()
{
    int num1 = 0, num2 = 0;

    printf("Enter 2 numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

   
findHCF(num1,num2);
   

    return 0;
}

void findHCF(int A, int B)
{
    int hcf = 1;

    for (int i = 1; i <= A || i <= B; i++)
    {
        if ((A % i == 0) && (B % i == 0))
        {
            hcf = i;
        }
    }
     printf("HCF of %d and %d is: %d", A, B, hcf);
}