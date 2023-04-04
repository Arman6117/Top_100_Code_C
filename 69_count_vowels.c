// C program to count vowels from a given string 
#include <stdio.h>

void countVowel(char ch[]);
int main () 
{
  char  str[100]; 
  printf("Enter a string: ");
  scanf("%[^\n]s", &str);

  countVowel(str);
 return 0;
}

void countVowel(char ch[])
{
    int vowels = 0;
    for (int i = 0; ch[i] !='\0'; i++)
    {
        if (ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'|| ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            vowels++;
        }
        
    }
    
    printf("In string: %s \nThere are %d vowels", ch,vowels);
}