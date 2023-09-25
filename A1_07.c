#include<stdio.h>

int main(void)
{
   int num,rem=0;
   printf("Enter the number: ");
   scanf("%d",&num);

   printf("The factor of %d is :",num);
   for(int i = 1; i < num; i++)
   {
   rem = num % i;
   if(rem==0)
   {
    printf("%d,",i);
   }
  }
printf("\n");

return 0;
}
