// C program to find sum of first N natural numbers

#include <stdio.h>

int addNum(int A);
int main()
{
    int no = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    addNum(no);                  // First way using iteration
    int ans = no * (no + 1) / 2; // Second way using direct formula
    printf("%d", ans);           //

    return 0;
}

int addNum(int A)
{
    int ans = 0;
    for (int i = 0; i <= A; i++)
    {

        ans += i;
    }
    printf("Sum is %d", ans);
}
/*
   ans = 0
   i = 1
   0 + 1 =1
   1+2  = 3
   3+3 =6
   6+4 = 10
   10+5 = 15
   formula : n*(n+1)/2
*/