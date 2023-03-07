// C program to print prime numbers in a given range

#include <stdio.h>

void printPrime(int A, int B);

int main()
{
    int start = 0, end = 0;

    printf("Enter the start and the end of the range\n");
    scanf("%d%d", &start, &end);

    printPrime(start, end);
    return 0;
}

void printPrime(int A, int B)
{
    int i, j, count;

    // loop through the range from A to B
    for (i = A; i <= B; i++)
    {
        count = 1; // assume i is prime

        // check if i is divisible by any number other than 1 and itself
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count = 0; // i is not prime
                break;
            }
        }

        // print i if it is prime
        if (count == 1 && i > 1)
        {
            printf("%d ", i);
        }
    }
}
/*
  start = 5 end = 23

   i = start j = 2 count = 0

   loop

   i = 5 i <= 23  i++
    
    j = 2 j < i j++
*/