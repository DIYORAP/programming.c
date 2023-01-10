#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j,k,p;
    clrscr();
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(k=5; k>=i; k--)
        {
            printf("%d",i);
        }
        for(p=5; p>i; p--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}