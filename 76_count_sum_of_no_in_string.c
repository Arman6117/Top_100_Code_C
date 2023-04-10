// C program to count the sum of numbers in a string

#include <stdio.h>

int countSum(char str[]);
int main()
{
    char str[100];
    int sum;

    printf("Enter a string: ");
    scanf("%s", &str);
    
    sum = countSum(str);
    printf("Sum of the numbers in the string is %d", sum);
    

    return 0;
}

int countSum(char str[])
{
    int sum = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum = sum + (str[i] - '0');
        }
    }

    return sum;
}
