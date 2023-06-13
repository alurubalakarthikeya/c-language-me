/*Program to find the perimeter and the area of a circle using float, float is a data type which is used to represent a decimal number*/
#include<stdio.h>
int main()
{
  float radius, area, peri;
  printf("\n Enter the radius of circle: ");
  scanf("%f", &radius); //%f is used to scan the decimal value as input
  area= 3.14*radius*radius;
  peri=2*3.14*radius;
  printf("\n Area is of the triangle is: %lf", area);
  printf("\n Perimeter of the circle is: %lf", peri);
}
