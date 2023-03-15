// Number of days in a given month of a given year in C
#include <stdio.h>

void countDay(int A, int B);
int main()
{
    int year = 0, month = 0;

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter month: ");
    scanf("%d", &month);

    countDay(year,month);
    return 0;
}

void countDay(int A, int B)
{
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (A % 400)
    {
        if ((A % 4 == 0) && (A % 100 == 0))
        {
            printf("Number of days is %d", monthDays[B - 1] + 1);
        }
        else
        {
            printf("Number of days is %d", monthDays[B - 1]);
        }
    }
}