#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    char s[50];
    clrscr ();
    printf("\n enter text:");
    gets(s);
    i=0;
    while(s[i]!='\0')
    {
    i++;
    }
    printf("\n length=%d",i);
    getch();
    }
    