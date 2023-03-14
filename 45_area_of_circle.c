#include <stdio.h>
#define PI 3.14
float calArea(int A);
int main () 
{
 float r = 0, area = 0;

  printf("Enter radius of circle: ");
  scanf("%f", &r);

  area = calArea(r);
  printf("Area of a circle is: %.2f",area);

 return 0;
}

float calArea(int A)
{
 float area = 0;

  area = PI * A * A;

  return area;
}