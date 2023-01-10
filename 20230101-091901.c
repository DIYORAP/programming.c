#include<stdio.h>
#include<conio.h>
void sum(int,int,int );
void avg(int,int,int );

void main()
{
    int x,y,c;
    scanf("%d %d",&x,&y);
    sum(x,y,c);
    avg(x,y,c);
}

void sum(int a,int b,int c)
{
    c= a + b;
      printf("\n sum %d",c);

}

void avg(int x,int y,int avg)
{
    avg= x+y/2;
        printf("\n avreaj of %d ",avg);
}
getch();
