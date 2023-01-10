#include<stdio.h>
#include<conio.h>



void main()
{
   int n,c,s=0,r;
   clrscr();
    printf("enter number");
    scanf("%d",&n);
   c=n;
   while(n>0)
   {
     r=n%10;
     s=r+(s*10);
     n=n/10;
    
    }
   if (c==s)
    {
     printf("pilidrom");
    }
    else

   {
     printf("not pidrro.");}
}