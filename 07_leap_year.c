// C pogram to check the given year is leap year or not

#include <stdio.h>

void checkYear(int Y);
int main()
{
    int year = 0;

    printf("Enter a year ");
    scanf("%d", &year);

    checkYear(year);

    return 0;
}

void checkYear(int Y)
{
    if ((Y % 400) == 0)
    {
        if ((Y % 4) == 0 && (Y % 100) != 0)
        {
            printf("Given year is a Leap year");
        }
    }

    else
    {
        printf("Given year is not a Leap year");
    }
}

/*
  Conditions to check leap year

  For any year to be a leap year it must satisfy either of these conditions
1. Year must be divisible by 400.
2. Year must be divisible by 4 and not by 100 at the same time.

*/