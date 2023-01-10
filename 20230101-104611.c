#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[10], str2[10];
    printf("enter string");
    gets(str1);
    printf("\n enter str2");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("string not equal");
    }
    else
    {
        printf("equal");
    }
    getch();
}