/*Biggest of two numbers using nested*/
#include<stdio.h>
main()
{
  int var1, var2;
  printf("\n Enter the value of var1:");
  scanf("%d", &var1);
  printf("\n Enter the value of the var2:");
  scanf("%d", &var2);
  if (var1 != var2) 
  {
    printf("\n Var1 is not equal to var2");
    if (var1>var2)
    {
        printf("\n Var1 is greater than var2");
    }
    else 
    {
        printf("\n Var2 is greater than Var1");
    }
  } 
  else 
  {
    printf("\n Both Var1 and Var2 are equal");
  }
}