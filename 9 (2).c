#include<stdio.h>
#include<conio.h>
void main()
{
    float d1,d2,d3,d4,d5;

    clrscr();

    printf("\nEnter temperature in Celsius: ");

    printf("\nDay1 = ");
    scanf("%f",&d1);
    printf("Day2 = ");
    scanf("%f",&d2);

    printf("Day3= ");
    scanf("%f",&d3);

    printf("Day4= ");
    scanf("%f",&d4);
    printf("Day5 = ");
    scanf("%f",&d5);

    printf("\nAverage = %f", (d1+d2+d3+d4+d5)/5);
    getch();
}