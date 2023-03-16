// C Program to sort First half in Ascending order and Second Descending order
#include <stdio.h>
#include <stdlib.h>
void sort(int arr[], int len);
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

    sort(num,size);
    return 0;
}

void sort(int arr[], int len) // {1 2 3 4}
{
    int temp = 0;

    for (int i = 0; i < len-1; i++) 
    {
       for (int j = 0; j < len/2;j++) 
       {
         if (arr[j]>arr[j+1]) 
         {
            temp = arr[j]; 
            arr[j] = arr[j +1]; 
            arr[j +1] = temp; 
         }
         
       }

       for (int k = len/2; k < len-1; k++)
       {
         if (arr[k]< arr[k+1])
         {
             temp = arr[k];
             arr[k] = arr[k+1];
             arr[k +1] = temp;
         }
         
       }
       
       
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d," , arr[i]);
    }
    
    
}

/*
     Bubble Sort is a very simple and easy to implement sorting technique.
     In the bubble sort technique, each pair of element is compared.
     Elements are swapped if they are not in order.
*/