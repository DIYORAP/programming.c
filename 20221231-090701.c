#include<stdio.h>
#include<conio.h>



void main()
{
    int no1=0,no2=100000,no3=-1;
    clrscr();
    if(no1>no2)
    {
        if(no1>no3)
        {
            printf("maximum number 1");
        }
        else
        {
            printf("maximum number 3");
        }


    }
    else
    {
        if(no2>no3)
        {
            printf("no2 maximum number");
        }
        else
        {
            printf("no3 maximum");
        }
    }
    getch();
}
