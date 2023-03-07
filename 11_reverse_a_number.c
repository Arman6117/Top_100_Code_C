// C program to resverse a number
#include <stdio.h>

int reverseNum(int A);
int main()
{ 
    int num = 0 , ans = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    ans = reverseNum(num);

    printf("Reversed number is %d", ans);

    return 0;
}

int reverseNum(int A) // 123
{
    int reverse = 0, rem = 0;

    while (A != 0)
    {
        rem = A % 10;                 // 3 rem = 3
        reverse = reverse * 10 + rem; // 0 = 0 * 10 + 3 = 3 reverse = 3
        A = A / 10;                   // 123 = 123 / 10 = 12      A = 12
    }
    return reverse;
} 
/*
        Initialize reverse = 0, rem

        Extract the last digit of num (rem = num % 10)

        Multiply reverse with 10 & add remainder (reverse = reverse * 10 + rem)

        Reduce the original number (num = num/10)

        Keep doing this until original number becomes 0
*/
