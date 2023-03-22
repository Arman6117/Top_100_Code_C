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
    int freq[len];
    int visited = -1,count = 0;

    for (int i = 0; i <len; i++)
    {
        count = 1;
        for (int j = i+ 1; j<len; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
                freq[j] = visited; // to mark visited
            }
            
        }
        if (freq[i] != visited)
        {
            freq[i] = count;  // storing count of the elements
        }
        
    }
    
    //printing counter

    for ( int i = 0; i < len; i++)
    {
       if (freq[i] != visited)
       {
         printf("%d occurs %d times\n", arr[i],freq[i]);
       }
       
    }
    
}