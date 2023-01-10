#include<stdio.h>
 
void main() {
 
 
int arr[10];
int i;
float sum=0;
float avg;
  
 
printf("\n Enter 10 numbers : \n\n");
 
//taking input by the user
  
 for(i = 0; i<10;i++) {
      
      printf("Enter no. %d   :   \n",i+1);
      scanf("%d",&arr[i]);
       
      
 }
  
  
 for(i = 0; i<10;i++) {
            
         sum = sum + arr[i];   
}
 printf("Sum : %.0f\n",sum);
  
 avg = sum/10;
  
 printf("Average : %.2f",avg);
  
 
   }