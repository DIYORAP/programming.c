#include<stdio.h>
#include<conio.h>
#include<string.h>

   void main()
  {
    int l,b,area,primeter;
    clrscr();
     printf("enter side square ");
    scanf("%d",&l);
    area=l*l;
    printf("\narea %d",area);
    primeter=4*l;
    printf("\n primeter %d", primeter);
    printf("\nenter lenth,brath");
    scanf("%d %d",&l,&b);
    area=l*b;
    primeter=2*(l+b);
    printf("\narea %d",area);
    printf("\nprimeter %d", primeter);
    }