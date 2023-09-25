#include<stdio.h>

int main(void)
{
   int num,mul;
   printf("Enter the number do  you want print the table:");
   scanf("%d",&num);

   printf("The table of %d is:\n",num);

   for(int i=1; i<=10; i++)
   {

     mul = num*i;

     printf("%d X %d = %d\n",num,i,mul);

   }
   printf("\n");

   return 0;

}
