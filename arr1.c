#include<stdio.h>

int main(void)
{
  int arr[5] = {11,12,13,14,15};
  int *ptr = arr;
  printf("arr= %u\n",arr);

  printf("ptr= %u\n",ptr);

  printf("arr:\n");
  for(int i = 0;i<5;i++)
  printf("arr[%d]=%d\n",i,arr[i]);
  printf("\n");

   return 0;

}
