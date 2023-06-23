/*Electricity bill calculation*/
#include<stdio.h>
main()
{
    int prev,pres,n;
    float cost, bill;
    printf("\n Enter the previous month readings:");
    scanf("%d", &prev);
    printf("\n Enter the present month readings:");
    scanf("%d", &pres);
    if (pres>prev)
    {
        printf("\n Correct");
        n=pres-prev;
        if (n<500)
        cost=5;
        else if (n>=500&&n<1000)
        cost=7;
        else if (n>=1000&&n<1500)
        cost=8;
        else 
        cost=10;
        bill=n*cost;
        printf("\n Total bill amount is %.1f", bill);
    }
    else 
    printf("\n Units are incorrect");
}
