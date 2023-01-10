#include<stdio.h>
#include<conio.h>

void main ()
{
    char str[10];
    int i;
    printf("enter string:");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {

        if(str[i]>='a'&&str[i<='z'])
        {
            str[i]=str[i]-32;
        }
    }
    printf("\n uppercase string is:%s",str);
    getch();
    }