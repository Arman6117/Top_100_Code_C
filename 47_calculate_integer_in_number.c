// C program to calculate the number of digit in an integer
#include <stdio.h>

int calDig(int A);
int main()
{
    int no = 0, digits = 0;

    printf("Enter number: ");
    scanf("%d", &no);
    digits = calDig(no);
    printf("There are %d digits in number %d", digits, no);
    return 0;
}

int calDig(int A)
{
    int dig = 0;

    while (A != 0)
    {
        A /= 10;
        dig++;
    }
    return dig;
}

// Formula floor(log10(n))+1;