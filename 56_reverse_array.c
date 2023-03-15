// C Program to Reverse Elements of an Array

#include <stdio.h>
#include <stdlib.h>

void printRevArray(int Arr[], int len);
void revArray(int Arr[], int start, int end,int len);
int main()
{
    int *num = NULL, size = 0, start = 0, end = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);
    end = size - 1;

    num = (int *)malloc(size * sizeof(int));

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }

    // printRevArray(num, size);
    revArray(num,start,end,size);

    free(num);

    return 0;
}

// First way just print array in reverse
void printRevArray(int Arr[], int len)
{

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%d, ", Arr[i]);
    }
}
// Second way  Actual in-place reversing of the original array
void revArray(int Arr[], int start, int end,int len)
{
    int cnt = 0;
    // int len = sizeof(Arr) / sizeof(Arr[0]);
    // {10,20,30}
    while (start < end) // 0 < 2// 1<2
    {
        cnt = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = cnt;
        start++;
        end--;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d, ", Arr[i]);
    }
}