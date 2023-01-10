#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k;
    clrscr();
    for(i=1; i<=10; i++)
    {
        for(j=10; j>i; j--)//. space 
        {
            printf(" *");
        }
       printf("\n");
    }
    
    getch();
}