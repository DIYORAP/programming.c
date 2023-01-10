#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    float f;
    
    clrscr();
    printf("\n enter temperature in f");
    scanf("%f",&f);
    printf("convert to celsius %f",((f-32)*5)/9);
    
    getch();
    }