/*Alphabet number according to ASCII*/
#include<stdio.h>
main()
{
    char a;
    printf("\n Enter an alphabet: ");
    scanf("%c", &a);
    if (a>='A'&&a<='z')
    a=a+32;
    else
    a=a-32;
    printf("\n The character %c", a);
}
