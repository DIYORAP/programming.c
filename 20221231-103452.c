#include<stdio.h>
#include<conio.h>



void main()
{
   int n;
   clrscr();
   printf("enter year .!");
   scanf("%d",&n);
   if(n%4==0)
   {
     printf("leap year");}
   
    else
   {
    printf("not leap year");
    }

    getch();
}
    