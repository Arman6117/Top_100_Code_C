// C Program to Capitalize the First and Last Letter of Each Word of a String

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capChar(char str[]);
int main () 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", &str);

    capChar(str);
 
 return 0;
}

void capChar(char str[])
{
    for (size_t i = 0; i< strlen(str); i++)
    {
        if (i == 0 || i == strlen(str)-1)
        {
            str[i] = toupper(str[i]);
        }
        else if (str[i]== ' ')
        {
            str[i-1] = toupper(str[i-1]);
            str[i+1] = toupper(str[i+1]);
        }
        
    }
    
    printf("String after capitilising first and last charecter: %s", str);
}
