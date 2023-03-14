// C program to find prime between 1 to 100

#include <stdio.h>

int checkPrime(int A);
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (checkPrime(i))
        {
            printf("%d, ", i);
        }
    }

    return 0;
}

int checkPrime(int A)
{
    if (A < 2)
    {
        return 0;
    }
    else
    {
        int x = A / 2;

        for (int i = 2; i <= x; i++)
        {
            if (A % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}