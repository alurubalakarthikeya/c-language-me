/*Electricity bill calculator using C Langauge */
#include<stdio.h>
main()
{
	int eid, prev,pres,n;
	double cost,tbill;
	printf("\n Enter the electricity bill ID:");
	scanf("%d", &eid);
	printf("\n Enter the reading of previous month:");
	scanf("%d", &prev);
	printf("\n Enter the readings of present month:");
	scanf("%d", &pres);
	n=pres-prev;
	printf("\n Enter cost per unit:");
	scanf("%lf", &cost);
	tbill=n*cost;
	printf("\n-------------------------------------------------------");
	printf("\n ELECTRICITY BILL CALCULATION");
	printf("\n-------------------------------------------------------");
	printf("\n Electricity bill ID:%d", eid);
	printf("\n Previous month reading:%d",prev);
	printf("\n Present month reading:%d", pres);
	printf("\n Number of units:%d", n);
	printf("\n Cost per each unit:%lf", cost);
	printf("\n Total bill:%lf", tbill);
}
