/*Electric bill calculation*/
#include<stdio.h>
main()
{
	int prev,pres,eid,n;
	double cost,tbill;
	printf("\n Enter the bill ID:");
	scanf("%d", &eid);
	printf("\n Enter the previous month reading:");
	scanf("%d", &prev);
	printf("\n Enter the present month reading:");
	scanf("%d", &pres);
	if (pres>prev)
	{
		printf("\n Units are correct");
		n=pres-prev;
		printf("\n Enter cost per unit:");
		scanf("%lf", &cost);
		tbill= n*cost;
		printf("\n----------------------------------------------------------");
		printf("\n ELECTRICITY BILL");
		printf("\n ---------------------------------------------------------");
		printf("\n Electricity bill ID:%d", eid);
		printf("\n Previous month reading:%d", prev);
		printf("\n Present month reading:%d", pres);
		printf("\n Number of units:%d", n);
		printf("\n Cost per each unit:%lf", cost);
		printf("\n Total bill amount:%lf", tbill);
	}
		else
		printf("\n Units are not correct");
	
}
