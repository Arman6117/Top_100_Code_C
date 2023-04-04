// C program to find ASCII value of charecter
#include <stdio.h>

void findASCII(char ch);
int main () 
{
 char ch = '\0';
 printf("Enter a charecter: ");
 scanf("%c", &ch);

 findASCII(ch);
 return 0;
}

void findASCII(char ch)
{
    printf("The ASCII value of %c is %d", ch,ch);
}