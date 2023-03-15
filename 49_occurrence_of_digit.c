// C Program for finding the occurrence of a digit in a given number

#include <stdio.h>

int countNum(int A, int B);
int main()
{
    int num = 0, dig = 0,occ =0;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter digit: ");
    scanf("%d", &dig);
   
    occ = countNum(num,dig);

    printf("The digit %d occurs %d times in %d", dig,occ,num);
    return 0;
}

int countNum(int A, int B)
{
    int count = 0, digit = 0;

    while (A != 0)
    {
        digit = A % 10;
        if (digit == B)
        {
            count++;
        }
        A /= 10;
    }
    return count;
}