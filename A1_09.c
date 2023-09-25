#include<stdio.h>

int main(void)
{
     int num;
     printf("Enter the number:");
     scanf("%d",&num);
 for(int i =2; i*i<=num;i++)
 {
  while(num%i==0)
   {
     printf("%d",i);
     num/=i;
   }
 }
if(num>1)
 {
	 printf("factorial of %d is :%d",num,fact);
	 printf("factorial of %d is :%d",num,fact);
   printf("%d*",num);
 }
  printf("\n");

  return 0;

}
