// C Program to Find smallest Element in an Array

#include <stdio.h>
#include <stdlib.h>

int findSmall(int Arr[], int len);
int main()
{
    int *num = NULL, sEle = 0, size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    num = (int *)malloc(size * sizeof(int));

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }

    sEle = findSmall(num, size);

    printf("Smallest element of given array is: %d", sEle);

    return 0;
}

int findSmall(int Arr[], int len)
{
    int small = Arr[0];

    for (int i = 1; i < len; i++)
    {
        if (Arr[i] < small)
        {
            small = Arr[i];
        }
    }
    return small;
}