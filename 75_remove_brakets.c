// C programming code to remove brackets from an algebraic expression

#include <stdio.h>

void rmBrackets(char str[]);
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", &str);

    rmBrackets(str);

    return 0;
}

void rmBrackets(char str[])
{
    char new_str[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] != '(' && str[i] != ')')
        {
            new_str[j++] = str[i];
        }
    }
    new_str[j] = '\0';

    printf("String after removing brackets: %s", new_str);
}