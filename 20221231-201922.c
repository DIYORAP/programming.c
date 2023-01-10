#include<stdio.h>
#include<conio.h>



void main()
{
    int i,sum=0,ok;
    clrscr();
    for(i=2; i<=100; i=i+2)
    {
        
        sum=sum+i;
    }
    printf("%d",sum);
    for(i=1; i<=100; i=i+2)
    {
        
        ok=ok+i;
    }
    printf("\n%d",ok);
    getch();
}