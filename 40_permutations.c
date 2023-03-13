// Permutations In Which N People Can Occupy R Seats In A Classroom | C Program

/*In a classroom some of the seats are already occupied by students and only a few seats are available in the classroom. The available seats are assumed as r and n number of students are looking for the seat. We need to find in how many different permutations n number of students can sit on r number of chairs.*/

/*Algorithm
Input number of students in n
Input number of seats in r
Use permutation formula { factorial(n) / factorial(n-r) }
Print Output*/

#include <stdio.h>

int factorial (int A);
int main () 
{
   int n = 0,r =0,p=0;

   printf("Enter number of students: ");
   scanf("%d", &n);

   printf("Enter number of seats: ");
   scanf("%d", &r);

   p = factorial(r) / factorial(r-n);

   printf("The possible arragements are: %d", p);

 return 0;
}
int factorial (int A)
{
    int fact = 1;

    for (int i = 1; i <= A; i++)
    {
        fact *= i;
    }
    return fact;
}