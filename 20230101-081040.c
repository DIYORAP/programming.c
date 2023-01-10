#include<stdio.h>
#include<conio.h>

void main()
{
    int array[10],i=1,sum=0;
    clrscr();

    while(i<=5)
    {
        printf("enter araay");

        scanf("%d",&array[i]);
        sum =sum+array [i];
        i++;

    }
    printf("%d",sum);
    getch();
}