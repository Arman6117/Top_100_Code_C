// C program to check if a given string is palindrome or not
#include <stdio.h>
#include <string.h>

void checkStr(char str[]);
int main()
{
 
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", &str);

    checkStr(str);
    return 0;
}

void checkStr(char str[])// AMA
{
    int f = 0, len = strlen(str);
    for (int i = 0; i<len; i++)
    {

        if (str[i] != str[len - i - 1])
        {
            f = 1;
            break;
        }
    }

    if (f)
    {
        printf("%s is not a palidrome string",str);
    }
    else
    {
        printf("%s is a palindrome string",str);
    }
}