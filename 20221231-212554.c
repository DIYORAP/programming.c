#include<stdio.h>
#include<conio.h>



void main()
{
    int n,i;
    float ans,sum=0;

    printf("\n enter limit");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        ans=(float)1/i;
        sum=sum+ans;
        printf("\t %f",ans);
    }
    printf("\n sum %f",sum);

    getch();
}