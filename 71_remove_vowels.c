// C program to remove vowels from the sting
#include <stdio.h>
#include <string.h>
void rmVowel(char ch[]);
int main () 
{
    int str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", &str);
    
    rmVowel(str);
 
 return 0;
}

void rmVowel(char str[])
{
    int len = strlen(str);
    for (int i = 0; str[i]!= '\0'; i++)
    {
        if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
        str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            for (int j = i; j <len; j++)
            {
                str[j] = str[j +1];
            }
            i--;
            len--;
        }
        
    }
    
    printf("String after removing vowels: %s", str);
}
