// C Program to sort array in Ascending order
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int len);
void bubbleSort(int arr[], int len) ;

int main()
{
    int *num = NULL, size = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    num = (int *)malloc(size * sizeof(int));

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }

    selectionSort(num, size);
    return 0;
}

// Method 1 := Selection Sort
void selectionSort(int arr[], int len) // {4,2,6,1}
{
    int temp = 0, min_idx = 0, i = 0,  j = 0;

    // Iterating through array

    for (i; i < len - 1; i++) 
    {
        min_idx = i; 

        // findning smallest elements

        for (j = i + 1; j < len; j++) 
        {
            if ( arr[j] < arr[min_idx]) 
            {
               min_idx = j;  
            }
            // Inter changing values

            temp = arr[min_idx];  
            arr[min_idx] = arr[i]; 
            arr[i] = temp;
        }
    }
    printf("After sorting\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

/*
  Selection Sort :-

        Step 1-Select the smallest value in the list.
        Step 2-Swap smallest value with the first element of the list.
        Step 3-Again select the smallest value in the list (exclude first value).
        Step 4- Repeat above step for (n-1) elements untill the list is sorted.
*/

// Method 2 := bubble Sort

