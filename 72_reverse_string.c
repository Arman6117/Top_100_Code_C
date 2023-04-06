// C program to reverse a string

#include <stdio.h>
#include <string.h>

void revStr(char str[]); 
int main () 
{
  
  char str[100];

  printf("Enter a string: ");
  scanf("%[^\n]s", &str);

  revStr(str);
 
 return 0;
}

void revStr(char str[])
{
    int temp = 0,len = strlen(str);

    for (int i = 0; i < len/2; i++)
    {
        temp  = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    printf("Reversed string: %s", str);
}