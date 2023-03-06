// C program to get the sum of the numbers in a given range
#include <stdio.h>

int addNum(int A, int B);
int main()
{
    int start = 0, end = 0, results = 0;
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter last number: ");
    scanf("%d", &end);

    results = addNum(start, end);

    printf("The sum of numbers in given range is: %d", results);

    return 0;
}
int addNum(int A, int B)
{
    int ans = 0;
    for (int i = A; i <= B; i++)
    {
        ans += i;
    }
    return ans;
}

/*
  range 2 - 4 = 2 + 3 + 4

  a = 2 b = 4
  i = 2 i<= 4
  ans += i
  0 + 2 = 2
  2 + 3 = 5
  5 + 4 = 9
 formula : b*(b+1)/2 - a*(a+1)/2 + a;
*/