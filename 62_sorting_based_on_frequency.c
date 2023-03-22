// Sorting element in array by frequency using C

// C program to find frequency of each element of array

#include <stdio.h> 
#include <stdlib.h>

void countEle(int arr[], int len);
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

   countEle(num,size);
    free(num);

    return 0;
}

void countEle(int arr[], int len)
{
   
}

/*
    
*/