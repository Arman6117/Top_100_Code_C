// C program to check greatest of 2 numbers
#include <stdio.h>

void checkNum (int A, int B); 
int main () 
{
 int no1 = 0 , no2 = 0;

 printf("Enter two numbers: \n");
 scanf("%d\n%d", &no1,&no2);

 checkNum(no1,no2);

 return 0;
}

void checkNum (int A, int B)
{
 
    if (A>B)
    {
        
      printf("%d is the greatest", A);

    }
    else if (B>A)
    {
        printf("%d is the greatest", B);
        
    }
    else {
        printf("Both zero");
    }
    
}
