/*Student pass or fail*/
#include<stdio.h>
main()
{
    int rno, m1, m2, m3;
    float tot, avg;
    char sname[10];
    printf("\n Enter the student roll number");
    scanf("%d", &rno);
    printf("\n Enter the student name:");
    scanf("%s", &sname);
    printf("\n Enter the three subjetc marks");
    scanf("%d%d%d", &m1, &m2, &m3);
    tot= m1+m2+m3;
    avg= tot/3;
    printf("\n---------------------------------------");
    printf("\n STUDNET MARKS LIST");
    printf("\n---------------------------------------");
    printf("\n Student roll number:%d", rno);
    printf("\n Student name:%s", sname);
    printf("\n Student three subjects marks:%d %d %d", m1, m2, m3);
    printf("\n Total marks:%f", tot);
    printf("\n Average marks:%f", avg);
    if (m1>=35&&m2>=35&&m3>=35)
    printf("\n Status: Passed");
    else
    printf("\n Status: Failed");
}
