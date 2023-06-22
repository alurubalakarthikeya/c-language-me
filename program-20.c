/*Program to check vowels or not*/
#include<stdio.h>
main()
{
    char ch;
    printf("\n Enter a character:");
    scanf("%c", &ch);
    if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    printf("\n The alphabet is a vowel");
    else 
    printf("\n The alphabet is not a vowel");
}