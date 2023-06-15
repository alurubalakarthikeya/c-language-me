/*Product discount calculation*/
#include<stdio.h>
main()
{
	int pid, qty;
	char pname[10];//Here 10 is used as maximum limit for input
	float price, amount,disp, discount, netbill;
	printf("\n Enter product ID:");
	scanf("%d", &pid);
	printf("\n Enter the product name:");
	scanf("%s", &pname);
	printf("\n Enter the price of each unit:");
	scanf("%f", &price);
	printf("\n Enter the quantity:");
	scanf("%d", &qty);
	printf("\n Enter the discount price:");
	scanf("%f", &disp);
	printf("\n--------------------------------------------------------------------");
	printf("\n PRODUCT DISCOUNT CALCULATION");
	printf("\n-------------------------------------------------------------------");
	printf("\n Product ID:%d", pid);
	printf("\n Product name:%s", pname);
	printf("\n Price per each unit:%f", price);
	printf("\n Quantity:%d", qty);
	printf("\n Discount price:%f", disp);
	printf("\n Total bill amount:%f", netbill);
}
