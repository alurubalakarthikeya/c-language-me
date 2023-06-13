/*Area and perimeter of a rectangle using dobule data type in C Language */
#include<stdio.h>
main()
{
    double length, breadth,area,perimeter; // double is also one of the data types in C language used for long type decimals
    printf("\n Enter the length and bredath of the rectangle:");
    scanf("%lf%lf",&length,&breadth);
    area= length*breadth;
    perimeter= 2*length+breadth;
    printf("\n Area of the rectangle is:%lf", area);
    printf("\n Permiter of the rectangle is:%lf", perimeter);
}
