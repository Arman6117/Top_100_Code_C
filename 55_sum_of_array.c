// C Program to find Sum of Elements in an Array

#include <stdio.h>
#include <stdlib.h>

int sumArray(int Arr[], int len);
int main()
{
    int *num = NULL, sum = 0, size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    num = (int *)malloc(size * sizeof(int));

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }

    sum = sumArray(num, size);

    printf("The sum of all elements of the given array is: %d", sum);

    free(num);

    return 0;
}

int sumArray(int Arr[], int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += Arr[i];
    }
    
    return sum;
}