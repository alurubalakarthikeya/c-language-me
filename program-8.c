/* Swaping machine using C language*/
#include<stdio.h>
main()
{
	int a,b,temp;
	printf("\n Enter the values of a and b:");
	scanf("%d%d", &a, &b);
	printf("\n Before swaping A=%d and B=%d", a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n After swaping A=%d amd B=%d", a,b);
}
