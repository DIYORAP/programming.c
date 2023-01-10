#include<stdio.h>
#include<conio.h>



void main()
{
    int no,rev=0,rem;

    printf("\n enter electi");
    scanf("%d",&no);
    while(no>0)
    {
        rem=no%10;
        rev=rev+rem;
        no=no/10;
    }
    printf("%d", rev);
    getch();
}
