/*Student marks calculation*/
#include<stdio.h>
main()
{
    int rno, m1, m2, m3;
    char sname[10];
    float tot, avg;
    printf("\n Enter the student roll number:");
    scanf("%d", &rno);
    printf("\n Enter the student name:");
    scanf("%s", &sname);
    printf("\n Enter the marks of the student in three subjects:");
    scanf("%d%d%d", &m1, &m2, &m3);
    tot= m1+m2+m3;
    avg= tot/3;
    printf("\n-------------------------------------------------");
    printf("\n STUDENT MARK LIST");
    printf("\n-------------------------------------------------");
    printf("\n Student Roll Number:%d", rno);
    printf("\n Student name:%s", sname);
    printf("\n Student marks in 3 subjects:%d/t%d/t%d", m1,m2,m3);
    printf("\n Total marks:%lf", tot);
    printf("\n Average marks:%lf", avg);
    if (m1>=35&&m2>=35&&m3>=35)
    {
        printf("\n STATUS: PASS");
        if (avg>=75)
        printf("\n Passed with distinction");
        else if (avg<75&&avg>=65)
        printf("\n Paased in first class");
        else if (avg<65&&avg>=50)
        printf("\n Passed in Second class");
        else 
        printf("\n Passed in third class");
    }
    else
    printf("\n STATUS: FAIL");
}
