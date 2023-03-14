// Replace All 0’s With 1 In A Given Integer | C Program
#include <stdio.h>

int replaceNum(int A);
int main()
{

  int no,replaced = 0;

  printf("Enter a number: ");
  scanf("%d", &no);

   replaced = replaceNum(no);

   printf("Converted number is %d", replaced);
    return 0;
}

int replaceNum(int A)
{
    int num = A, num2 = 0, rem = 0,rem2 =0;

    if (num == 0)
    {
        num2 = 1;
    }

    while (num > 0) // 1001
    {
        rem = num % 10; // rem = 1 // rem = 0 // rem = 0// rem =1
        if (rem == 0)
        {              // denied // rem = 1 // rem = 1 // denied
            rem = 1;
        }
        num /= 10; // 100 // 10 // 1

        num2 = num2 * 10 + rem; // 0 * 0 + 0 num 2 =0 // 0 *10+ 1 num2 = 1 // 1*10+ 1 num2 == 11
    }
 
 num = 0; // num = 1001 num = 0

  while (num2 > 0)
    {
        rem2 = num2 % 10;
        
        num2 /= 10;

        num = num * 10 + rem2;
    } 

    return num;
}

/*
    Algorithm
  Take Input in num and initialize a variable num with with value 0
  If num is equals to zero then update the value of num2 to 1
  Iterate using a while loop until num is greater then 0
  For each iteration initialize a variable rem and store unit digit of num
  If rem equals to 0 then set rem to 1
  Set num to num divide by 10 & num2 equals to num2*10+rem
  Reverse and print num2

*/