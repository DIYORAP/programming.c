#include<stdio.h>
#include<conio.h>



void main()
{
   int x,n,ans,i,a;
   printf("\n enter limit");
   scanf("%d",&n);
   printf("\n enter value of x");
   scanf("%d",&x);
   for(i=1;i<=n;i++)
   {
    ans=x*i;
    printf("\t %d",ans);
    a=a+ans;
    }
    printf("%d", ans);
    getch();
    }