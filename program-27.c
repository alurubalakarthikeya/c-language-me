/*Biggest of three numbers*/
#include<stdio.h>
main()
{
    int a, b, c;
    printf("\n Enter any three values");
    scanf("%d%d%d", &a,&b,&c);
    if (a!=b&&a!=c)
    {
        if (a>b&&a>c)
        printf("\n %d is big", a);
        else if (b>c)
        printf("\n %d is big", b);
        else
        printf("\n %d is big", c);
    }
    else
    printf("\n All are equal");
}