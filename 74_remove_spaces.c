// C program to remove spaces from string ?

#include <stdio.h>

void rmSpace(char str[]);
int main () 
{
    char string[] = "A string with spaces";

    printf("String before removing spaces: %s\n", string);

     rmSpace(string);
 
 return 0;
}

void rmSpace(char str[])
{
    int i = 0 ,j =0;

    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i]==' ')
        {
            str[j] = str[i];
            j++;
        }
         str[j] = '\0';
    }
    
   
    
    printf("%s",str);
}
