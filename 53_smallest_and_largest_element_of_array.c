// C Program to find Largest and Smallest Element in an Array
#include <stdio.h>
#include <stdlib.h>

int findSmallMax(int Arr[], int len);
int main()
{
    int *num = NULL, size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    num = (int *)malloc(size * sizeof(int));

    printf("Enter elements of array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }

    findSmallMax(num, size);

    free(num);

    return 0;
}

int findSmallMax(int Arr[], int len)
{
    int small = 0, max = 0;

    small = max = Arr[0];

    for (int i = 1; i < len; i++)
    {
        if (Arr[i] > max)
        {
            max = Arr[i];
        }
        if (Arr[i] < small)
        {
            small = Arr[i];
        }
    }
    printf("Largest number in given array: %d\n", max);
    printf("Smallest number in given array: %d\n", small);
}