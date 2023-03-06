// C program to find greatest between 3 numbers

#include <stdio.h>

void checkNum(int A, int B, int C);

int main()
{
    int no1 = 0, no2 = 0, no3 = 0;

    printf("Enter three numbers: \n");
    scanf("%d \n %d \n %d", &no1, &no2, &no3);

    checkNum(no1, no2, no3);

    return 0;
}

void checkNum(int A, int B, int C)
{
    if (A > B && A > C)
    {
        printf("%d is the greatest", A);
        
    }
    
    else if (B > A && B > C)
    {
        printf("%d is the greatest", B);
    }

    else if (C > A && C > B)
    {
        printf("%d is the greatest", C);
    }
    
    else
    {
        printf("All zero");
    }
}