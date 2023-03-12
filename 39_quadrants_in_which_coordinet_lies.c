// Quadrants in which a given coordinate lies
// The C program reads the coordinate point in a x-y coordinate system and identify the quadrant. The program takes X and Y. On the basis of x and y value, the program will identify on which quadrant the point lies.
/*According mathematics quadrants rules:

X  is positive integer Y is also positive  first quadrant.
X  is negative integer Y is positive  second quadrant.
X  is negative integer Y is also negative  third quadrant.
X  is positive integer Y is negative fourth quadrant.*/

#include <stdio.h>

void checkQuadrant(int A, int B);
int main()
{
    int x = 0, y = 0;

    printf("Enter X and Y coordinates \n");
    scanf("%d", &x);
    scanf("%d", &y);

    checkQuadrant(x, y);

    return 0;
}

void checkQuadrant(int A, int B)
{
    if ((A > 0) && (B > 0))
    {
        printf("%d and %d lies in First quadrant", A, B);
    }
    else if ((A < 0) && (B > 0))
    {
        printf("%d and %d lies in Second quadrant", A, B);
    }
    else if ((A < 0) && (B < 0))
    {
        printf("%d and %d lies in Third quadrant", A, B);
    }
    else if ((A > 0) && (B < 0))
    {
        printf("%d and %d lies in Forth quadrant", A, B);
    }

    else if ((A == 0) && (B == 0))
    {
        printf("%d and %d lies on Origin", A, B);
    }

    else if ((A != 0) && (B == 0))
    {
        printf("%d and %d lies on X axis", A, B);
    }
    else
    {
        printf("Invalid number");
    }
}
