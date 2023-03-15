// C Program to find Second Smallest Element in an Array
#include <stdio.h>
#include <stdlib.h>

int findSecSmall(int Arr[], int len);
int main()
{
    int *num = NULL, size = 0, sSmall = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    num = (int *)malloc(size * sizeof(int));

    printf("Enter elements of array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }

    sSmall = findSecSmall(num, size);

    printf("The second smallest number in the array is: %d", sSmall);
    free(num);

    return 0;
}

int findSecSmall(int Arr[], int len)
{
    int small = 0, secSmall = 0, max = 0;

    small = secSmall = max = Arr[0];

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

    for (int i = 1; i < len; i++)
    {
        if (Arr[i] != small && Arr[i] < max && Arr[i] < secSmall)
        {
            secSmall = Arr[i];
        }
    }

    return secSmall;
}