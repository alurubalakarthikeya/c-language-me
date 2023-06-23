/*Product discount calculation*/
#include<stdio.h>
main()
{
    int pid,qty;
    char pname[10];
    double price, amount, discount, netbill, tdiscount;
    printf("\n Enter the Product ID:");
    scanf("%d", &pid);
    printf("\n Enter the Product name:");
    scanf("%s", &pname);
    printf("\n Enter the price per each unit:");
    scanf("%lf", &price);
    printf("\n Enter quantity:");
    scanf("%d", &qty);
    amount= price*qty;
    if (amount<500)
    discount=0;
    else if (amount>=500&&amount<1500)
    discount=0.02;
    else if (amount>=1500&&amount<2500)
    discount=0.04;
    else if (amount>=2500&&amount<5000)
    discount=0.05;
    else
    discount=0.1;
    tdiscount=amount*discount;
    netbill=amount-tdiscount;
    printf("\n---------------------------------------------------");
    printf("\n PRODUCT DISCOUNT CALCULATION");
    printf("\n---------------------------------------------------");
    printf("\n Product ID:%d", pid);
    printf("\n Product name:%s", pname);
    printf("\n Product price:%lf", price);
    printf("\n Quantity:%d", qty);
    printf("\n Total discount:%lf", tdiscount);
    printf("\n Total amount:%lf", amount);
    printf("\n Net Bill amount:%lf", netbill);
}