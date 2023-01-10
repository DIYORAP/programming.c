#include<stdio.h>
#include<conio.h>
void fact(int);
void main ()
{
    int no;
    printf("enter number");
    scanf("%d",&no);
    fact(no);
}
void fact (int no)
{
    int i=1,a=1;
    while(i<=no)
    {
        a=a*i;
        i++;
        
    }
    printf("\n fact is %d",a);
}
getch();

