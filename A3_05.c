#include<stdio.h>

int main(void)
{
   int num = 10;
   int *ptr;
   ptr = &num;

   printf("value of num = %d\n",num);
   printf("value of num using ptr = %d\n",*ptr);


   printf("&num = %u\n",&num);
   printf("ptr = %u\n",ptr);

   return 0;

}
