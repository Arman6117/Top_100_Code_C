#include <stdio.h>

void checkChar(char ch) ;
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
    if (ch == 'a'||ch == 'e'||ch == 'a'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'O'||ch == 'I'||ch == 'U')
    {
        printf("Given charecter is a Vowel");
    }
    else
    {
        printf("Given charecter is consonent");
    }
    
}