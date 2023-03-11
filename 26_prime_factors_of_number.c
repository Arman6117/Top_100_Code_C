// Prime Factors of a number in C
// C Program to check whether a number is Harshad number or not

#include <stdio.h>

void checkNum(int A);
int main()
{
    int num = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    checkNum(num);
    return 0;
}

void checkNum(int A)
{
    for (int i = 2; i <= A; i++)
    {
        while (A % i == 0)
        {
            printf("%d",i);
            A = A/ i;
        }
        
    }
    
}
