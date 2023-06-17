/*Biggest of the two numbers using logic in a single line*/
#include<stdio.h>
main()
{
	int a,b;
	printf("\n Enter any two numbers:");
	scanf("%d%d", &a, &b);
	if (a>b?printf("\n %d is big",a): printf("\n %d is big",b));
}
