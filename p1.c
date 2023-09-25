#include<stdio.h>
int main(void)
{
  int num=10;
  int *ptr = &num;

  printf("Address of ptr variable is %u\n",ptr);

  printf("value of ptr variable is %d\n",*ptr);

  printf("Address of num variable is %u\n",&num);

  printf("value of num variable is %d\n",num);


return 0;
}
