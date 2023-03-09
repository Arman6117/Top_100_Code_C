// C Program to Find the Factors of a Number
#include <stdio.h>
void factorCheck(int A);
int main()
{
    int num = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    factorCheck(num);

    return 0;
}

void factorCheck(int A)
{

    printf("Factors are: ");

    for (int i = 1; i < A; i++)
    {

        if (A % i == 0)
        {
            
            printf("%d, ", i);
        }
    }
}

/*
  Run a loop from i=1 to i=n.

  For, every i-th number check
  
  If (num % i==0) then, print that number
*/