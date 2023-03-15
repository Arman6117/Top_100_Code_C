// C Program to Find Largest Element in an Array
#include <stdio.h>
#include <stdlib.h>

int findMax(int Arr[], int len);

int main()
{
    int *arr = NULL, size = 0, maxEle = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    maxEle = findMax(arr, size);

    printf("Largest element in the array is: %d", maxEle);
    free(arr);

    return 0;
}
int findMax(int Arr[], int len)
{
    int max = Arr[0];

    for (int i = 1; i < len; i++)
    {
        if (Arr[i] > max)
        {
            max = Arr[i];
        }
    }

    return max;
}

/*
    loop



*/