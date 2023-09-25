#include<stdio.h>

int main(void)
{
  int arr[5] = {11,22,33,44,55};
  int *ptr1 = arr;
  int (*ptr2)[5] = &arr;

  for(int i = 0; i < 5; i++)
  printf("ptr1[%d] = %d\n",i,ptr1[i]);

  for(int i = 0; i < 5; i++)
  printf("ptr2[%d] = %u\n",i,ptr2[i]);


   return 0;

}
