#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k;
    clrscr();
    for(i=1; i<=5; i++)
    {
        for(j=1; j<i; j++)//. space 
        {
            printf(" ");
        }
        for(k=i;k<=5;k++)
         {
           printf("*");
        }
       printf("\n");
    }
    
    getch();
}