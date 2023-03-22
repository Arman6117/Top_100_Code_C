// C program to count numbers of even and odd elements in an array
#include <stdio.h>
#include <stdlib.h>

void checkEle(int arr[], int len);
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

    checkEle(num,size);
    free(num);

    return 0;
}
void checkEle(int arr[], int len)
{
    int even =0,odd = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2== 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("Total number of even elements is %d\n",even);
    printf("Total number of odd elements is %d\n",odd);
}