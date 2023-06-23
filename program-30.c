/*Income tax calculation*/
#include<stdio.h>
main()
{
    int eid, age;
    float income, tax_percent, totaltax;
    char ename[10];
    printf("\n Enter employee ID:");
    scanf("%d", &eid);
    printf("\n Enter the employee name:");
    scanf("%s", &ename);
    printf("\n Enter the employee income:");
    scanf("%d", &income);
    printf("\n Employee age:");
    scanf("%d", &age);
    if (age>60)
    {
        if (income<=250000)
        {
            tax_percent=0;
        }
        else if (income>=250000&&income<=500000)
        {
            tax_percent=0.1;
        }
        else if (income>=500000&&income<=1000000)
        {
            tax_percent=0.2;
        }
        else
        tax_percent=0.3;
    }
    else if (age>=60&&age<=80)
    {
        if(income<=300000)
        {
            tax_percent=0;
        }
        else if (income>=300000&&income<=500000)
        {
            tax_percent=0.1;
        }
        else if (income>=500000&&income<=1000000)
        {
            tax_percent=0.2;
        }
        else 
        {
            tax_percent=0.3;
        }
        if (income<=500000)
        {
            tax_percent=0;
        }
        else if (income>=500000&&income<=1000000)
        {
            tax_percent=0.1;
        }
        else 
        {
            tax_percent=0.2;
        }
    }
    totaltax=tax_percent*income;
    printf("\n\n Total Income Tax to be paid is %lf", totaltax);
}   
