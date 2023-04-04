// C program to toggel each charecter of string
#include <stdio.h>

void toggel(char ch[]); 
int main () 
{
 
  char str[100];
  
  printf("Enter a string: ");
  scanf("%s", &str);

  toggel(str);
 return 0;
}

void toggel(char ch[])
{
    for (int i = 0; ch[i] !='\0'; i++)
    {
        if (ch[i]>= 'A' && ch[i]<='Z')
        {
            ch[i] += 32;
        }
        else if (ch[i]>= 'a' && ch[i]<= 'z')
        {
            ch[i] -= 32;
        }
        
    }
    
    printf("String after toggeling each charecter: %s", ch);
}