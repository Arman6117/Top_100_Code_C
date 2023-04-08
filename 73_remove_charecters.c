// C program to remove all characters from string except alphabets
#include <stdio.h>

void rmCharecters(char str[]); 
int main () 
{
 
 char str[] = "12Ar3man";
 rmCharecters(str);
 return 0;
}


void rmCharecters(char str[]) // 12Ar3man
{
   char new_str[100];

   for (int i = 0; str[i]!='\0'; i++)
   {
     if (str[i] >= 'A' && str[i]<='Z')
     {
        new_str[i] = str[i];                        
     }
    
     
   }
   
   printf("Updated string is: %s", new_str);
}
