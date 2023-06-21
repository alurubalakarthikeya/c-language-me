/* Program to check wheather a number is even or odd*/
#include<stdio.h>
main()
{
	int num;
	printf("\n Enter a number");
	scanf("%d", &num);
	if (num%2==0)
	printf("\n %d is an even number", num);
	else
	printf("\n %d is an odd number", num);
	printf("\n End of the program");
}
