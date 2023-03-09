// C Program to print Power of a number
#include <stdio.h>
#include <math.h>

int powerNum(int A, int B);
int main()
{
    int base = 0, power = 0, ans = 0;
    printf("Enter base ");
    scanf("%d", &base);

    printf("Enter power ");
    scanf("%d", &power);

    ans = powerNum(base, power);

    printf("Ans: %d", ans);

    return 0;
}

int powerNum(int A, int B)
{
    int ans = 0;

    ans = pow(A, B);
    return ans;
}