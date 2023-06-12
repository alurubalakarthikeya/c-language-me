/*Writing Basic Arthematic operations using C language including addition, substraction, multiplication, division and remainder*/
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("\n Enter any two numbers of your wish: ");
  scanf("%d%d", &a, &b);
  c=a+b;
  printf("\n Sum of the inputs is: %d",c);
  c=a-b;
  printf("\n Difference of the inputs is: %d",c);
  c=a*b;
  printf("\n The Multiplucation of the two numbers is: %d", c);
  c=a/b;
  printf("\n The Division of the inputs is: %d", c);
  c=a%b;
  printf("\n The remainder of the inputs will be: %d", c);
}
