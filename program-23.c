/*Employee pay slip*/
#include<stdio.h>
main()
{
    int eno;
    char ename[10];
    float sal, da, ta, hra, gross,it,netsal;
    printf("\n Enter the employee ID:");
    scanf("%d", &eno);
    printf("\n Enter the emoployee name:");
    scanf("%s", &ename);
    printf("\n Enter the salary of the emoplyee");
    scanf("%f", &sal);
    if (sal<10000)
    {
        ta= sal*0.04;
        da= sal*0.05;
        hra= sal*0.06;
        it=0;
    }

    else if (sal>=10000&&sal<25000)
    {
        ta= sal*0.05;
        da= sal*0.06;
        hra= sal*0.07;
        it= sal*0.02;
    }

    else if (sal>=25000&&sal<50000)
    {
        ta= sal*0.06;
        da= sal*0.07;
        hra= sal*0.08;
        it= sal*0.04;
    }
    else 
    {
        ta= sal*0.07;
        da= sal*0.08;
        hra= sal*0.09;
        it= sal*0.06;
    }
    gross= sal+ta+da+hra;
    netsal= gross-it;
    printf("\n-----------------------------------------------------------");
    printf("\n EMPLOYEE PAY SLP");
    printf("\n-----------------------------------------------------------");
    printf("\n Employee ID:%d", eno);
    printf("\n Employee name:%s", ename);
    printf("\n Employee salary:%f", sal);
    printf("\n Travelling allowences:%f", ta);
    printf("\n Dearness allowences:%f", da);
    printf("\n House Rent Allowences:%f", hra);
    printf("\n Gross Salary:%f", gross);
    printf("\n Income Tax:%f", it);
    printf("\n Net salary:%f", netsal);
}
