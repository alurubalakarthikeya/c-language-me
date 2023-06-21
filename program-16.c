/*Biggest of two numbers*/
#include<stdio.h>
main()
{
	int a,b;
	printf("\n Enter two numbers:");
	scanf("%d%d", &a,&b);
	if (a>b)
	printf("\n %d is greater than %d", a,b);
	else
	printf("\n %d is greater than %d", b,a);
}
