#include<stdio.h>
#include<conio.h>
void fibo(int);
void main ()
{
    int no,a=0,b=1;
    printf("enter limit");
    scanf("%d",&no);
    printf("\t %d \t%d\t",a,b);
    fibo(no);
}
void fibo(int no)
 {
    int a=0,b=1;
    int c;
    while(c<=no)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d \t",c);
    }
}
getch();

