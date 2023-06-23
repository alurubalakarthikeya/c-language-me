/*Sample program for gets and puts*/
#include<stdio.h>
main()
{
    char name[10];
    puts("\n Enter your name:");
    gets(name);
    puts("\n Your name is:");
    puts(name);
}