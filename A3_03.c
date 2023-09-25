#include<stdio.h>


void swap(void);
int num1, num2;

int main(void)
{
   printf("Enter the 1st number:\n");
   scanf("%d",&num1);
   printf("Enter the 2nd number:\n");
   scanf("%d",&num2);
   printf("Number before swaping = num1 =  %d, num2 = %d \n	",num1 ,num2);	
   swap();
   printf("Number after swaping = num1 = %d, num2 = %d \n",num1, num2);

   return 0;

}

 void swap(void)
 {
    int temp = num1;
	num1 = num2;
	num2 = temp;


 }
