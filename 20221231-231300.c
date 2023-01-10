#include<stdio.h>
#include<conio.h>

void main()
{
  char str[]="INDIA";
  clrscr();
  len=strlen(str);
  for(i=0;i<len;i++)
    {
      for(j=0;j<=i;j++)
       {
         printf("%c",str[j]);
        }
        printf("\n");
    }
   
    
    getch();
}