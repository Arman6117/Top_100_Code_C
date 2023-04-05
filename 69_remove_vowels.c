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

void rmVowel(char ch[])
{
    int len = strlen(ch);
    for (int i = 0; ch[i]!= '\0'; i++)
    {
        if (ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||
        ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            for (int j = i; j <len; j++)
            {
                ch[j] = ch[j +1];
            }
            i--;
            len--;
        }
        
    }
    
    printf("String after removing vowels: %s", ch);
}
