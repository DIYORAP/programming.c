#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k;
    clrscr();
    for(i=1; i<=5; i++)
    {
        for(j=5; j>i; j--)//. space 
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d",i);//number print
            printf("%d",i);
            
        }
        printf("\n");
    }
      
    
    getch();
}