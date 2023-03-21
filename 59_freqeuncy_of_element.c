// C program to find the frequency of each element in the array

#include <stdio.h>
#include <stdlib.h>

void freq(int arr[], int len);
int main()
{
    int *num = NULL, size = 0, start = 0, end = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);
  

    num = (int *)malloc(size * sizeof(int));

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }

   freq(num,size);
   

    free(num);

        


    return 0;
}


void freq(int arr[], int len)
{
    int visited[len];

   for(int i=0; i<len; i++){

      
          int count = 1;
          for(int j=i+1; j<len ; j++){
             if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
             }
          }

          printf("%d occurs %d times\n", arr[i], count);
       }
    
}


/*
    To check the status of visited elements create a array of size n.
    Run a loop from index 0 to n and check if (visited[i]==1) then skip that element.
    Otherwise create a variable count = 1 to keep the count of frequency.
    Run a loop from index i+1 to n
    Check if(arr[i]==arr[j]), then increment the count by 1 and set visited[j]=1.
    After complete iteration of for loop print element along with value of count.
*/