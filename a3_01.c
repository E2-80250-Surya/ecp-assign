#include<stdio.h>

int main(void)
{
   int num = 50;
   int*pointer;
   pointer =&num;
   
   printf("value at pointer: %p\n",pointer);
   
   printf("value at *pointer: %d\n",*pointer);

   printf("value at num: %d\n",num);
   return 0;

}
