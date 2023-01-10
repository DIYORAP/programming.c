#include<stdio.h>
#include<conio.h>

void main()
{
    char i,j,k='A';
    clrscr();
    for(i='A'; i<='E'; i++)
    {
        for(j='A'; j<=i; j++)//. space 
        {
            printf("%c",i);
            k++;
        }
        printf("\n ");
        
    }
    
    getch();
}