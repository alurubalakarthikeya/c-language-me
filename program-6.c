/* Student Marks list using C language*/
#include<stdio.h>
main()
{
	int rno,m1,m2,m3;//roll number and three subjects marks as variables and int stands for integer
	char sname[10];//Char stands for Character and its function is to take the input of the user
	float tot,avg;//float is a decimal data type
	printf("\n Enter the student id:");//print is used to print the elements that we enter
	scanf("%d", &rno);
	printf("\n Enter the name of the student:");
	scanf("%s", &sname);
	printf("\nEnter the three subject marks:");
	scanf("%d%d%d", &m1, &m2, &m3);
	tot= m1+m2+m3;
	avg= tot/3;
	printf("\n----------------------------------------------------------");
	printf("\n STUDENT MARKS SHEET");
	printf("\n----------------------------------------------------------");
	printf("\n Student roll number:%d", rno);
	printf("\n Student name:%s", sname);
	printf("\n Student marks in three subjects:%d %d %d", m1,m2,m3);
	printf("\n Total Marks:%f", tot);
	printf("\n Average Marks:%f", avg);
}
