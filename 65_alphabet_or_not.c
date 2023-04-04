//C program to check a Character Is An Alphabet Or Not

#include <stdio.h>

void checkChar(char ch);
int main () 
{
 
 char ch = '\0';

 printf("Enter a charecter: ");
 scanf("%c", &ch);

 checkChar(ch);
 return 0;
}

void checkChar(char ch)
{
    if (ch>= 'a' && ch<= 'z' || ch>= 'A' && ch<= 'Z')
    {
        printf("%c is an alphabet\n",ch);
    }
    else
    {
        printf("%c is not an alphabet\n",ch);
    }
    
}