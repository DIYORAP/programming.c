#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int a,b,c, square,cube;
    clrscr();
    printf("enter A");
    scanf("%d",&a);
    square=a*a;
    cube=a*a*a;
    printf("square: %d cude: %d ", square,cube);
    printf("enter b");
    scanf("%d",&b);
    square=b*b;
    cube=b*b*b;
    printf("square: %d cude: %d ", square,cube);
    printf("enter c");
    scanf("%d",&c);
    square=c*c;
    cube=c*c*c;
    printf("square: %d cude: %d ", square,cube);
    getch();
    }