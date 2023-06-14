/* Program to create a employee pay slip using c language*/
#include<stdio.h>
main()
{
  int eno;
  char ename[20];
  float sal, da, ta, hra, gross, it, netsal;
  printf("\n----------------------------------------------------------EMPLOYEE PAY SLIP------------------------------------------------\n");
  printf("\n\t\t Enter the employee ID: ");
  scanf("%d", &eno);
  printf("\n\t\t Enter the name of the employee: ");
  scanf("%s", &ename);
  printf("\n\t\t Enter the employee salary: ");
  scanf("%f", &sal);
  ta = sal*0.05;
  da = sal*0.06;
  hra = sal*0.07;
  gross = sal+ta+da+hra;
  it = sal*0.02;
  netsal = gross-it;
  printf("\n------------------------------------------------------------------------------------------------------------------------------\n");
  printf("\n                                                         EMPLOYEE PAY SLIP                                                    \n");
  printf("\n------------------------------------------------------------------------------------------------------------------------------\n");
  printf("\n Employee ID: %d", eno);
  printf("\n Employee Name: %s", ename);
  printf("\n Employee Salary:%f", sal);
  printf("\n Travelling Allowences: %f", ta);
  printf("\n Dearness Allowences: %f", da);
  printf("\n HOuse rent Allowences: %f", hra);
  printf("\n Gross salary: %f", gross);
  printf("\n Income Tax: %f", it);
  printf("\n Net salary: %f", net);
}
  
