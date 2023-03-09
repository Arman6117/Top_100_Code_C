// C program to Finding Nth term of a fibonacci series
#include <stdio.h>

int fibNum(int A);

int main()
{
    int num = 0;
    int fib = 0;
    printf("Enter a number ");
    scanf("%d", &num);

    fib = fibNum(num);
    printf("fib(%d): %d", num, fib);

    return 0;
}

int fibNum(int A)
{

    int a = 1, b = 1;
    int nTerm = 0;

    for (int i = 2; i < A; i++)
    {
        nTerm = a + b;
        a = b;
        b = nTerm;
    }

    return nTerm;
}