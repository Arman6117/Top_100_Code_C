// Write a C Program to find Fibonacci series up to n

#include <stdio.h>

void fibonacciNum(int A);

int main()
{
    int num = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    fibonacciNum(num);
    return 0;
}

void fibonacciNum(int A)
{

    int a = 0, b = 1;

    // printing the 0th and 1st term
    printf("%d, %d,", a, b);

    int nextTerm;

    // printing the rest of the terms here
    for (int i = 2; i < A; i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;

        printf("%d, ", nextTerm);
    }
}

/*
   1] Get a number
   2] 1st number 0 2nd 1
   3] loop to add prvious 2 numbers to get next number
   4] Print all the number in series

*/
/*
   direct formula
   Fn = {[(√5 + 1)/2] ^ n} / √5
*/