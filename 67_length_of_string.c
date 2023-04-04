// Length of string without using strlen function
#include <stdio.h>

// Standard method
int strlenX(char ch[]); 
// With using pointers
int strlenXX(char *p);
int main () 
{
 char str[100];
 int l = 0;
 printf("Enter a string (without any space): ");
 scanf("%s",&str);

// l = strlenX(str);
l = strlenXX(str);
printf("The length of given string is: %d",l);
 return 0;
}

int strlenX(char ch[])
{
    int len =0;
    
    // for (int i = 0; ch[i] != '\0'; i++)
    // {
    //     len++;
    // }
    
    // return len;

int j =0;
    while (ch[j] != '\0')
    {
       len++;
       j++; 
    }
    
    return len;
    
}

int strlenXX(char *p)
{
    int cnt = 0;

    while (*p !='\0')
    {
        cnt++;
        p++;
    }
    
    return cnt;
}