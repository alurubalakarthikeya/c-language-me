/*Student grade calculation*/
#include<stdio.h>
main()
{
    int rno, m1, m2, m3;
    char sname[19];
    double tot, avg;
    printf("\n Enter the student ID: ");
    scanf("%d", &rno);
    printf("\n Enter the name of the student: ");
    scanf("%s", &sname);
    printf("\n Enter the marks of the student in three subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);
    tot= m1+m2+m3;
    avg= tot/3;
    printf("\n--------------------------------------------------");
    printf("\n STUDENT GRADE CALCULATION");
    printf("\n--------------------------------------------------");
    printf("\n Student ID:%d", rno);
    printf("\n Student name:%s", sname);
    printf("\n Student marks in three subjects:%d %d %d", m1,m2,m3);
    printf("\n Total Marks:%lf", tot);
    printf("\n Average Marks:%lf", avg);
    if (avg>=75)
    printf("\n Distinction");
    else if (avg<75&&avg>=60)
    printf("\n First Class");
    else if (avg<60&&avg>=50)
    printf("\n Second Class");
    else if (avg<50&&avg>=35)
    printf("\n Third Class");
    else 
    printf("\n Failed");
	}
