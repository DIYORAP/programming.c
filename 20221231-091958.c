#include<stdio.h>
#include<conio.h>



void main()
{
    //0 1 1 2 3 5 8.......
    int a=0,b=1,c;
    
    
    clrscr();
    printf("%d %d",a,b);
    while(c<1000)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n \t%d",c);

    }
    getch();
}
