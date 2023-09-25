#include<stdio.h>
void swap(int, int);
int num1, num2;
int main(void)
{
    printf("Enter 1st number:\n");
	scanf("%d",&num1);
	printf("Enter 2nd number:\n");
	scanf("%d",&num2);
    
    swap(num1,num2);
   return 0;

}
void swap(int, int)
{
   printf("Befor swap: num1 = %d, num2 = %d\n",num1,num2);
   int temp = num1;
   num1 = num2;
   num2 = temp;
   printf("After swap : num1 = %d, num2 = %d\n",num1, num2);




}
