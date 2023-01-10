#include<stdio.h>
#include<conio.h>



void main()
{
    int i,n,max=0,no;
    printf("\n enter electi");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     printf("enter number");
     scanf("%d",&no);
    if(max<no)
        max =no;
        }
        printf("%d",max);
    }