#include<stdio.h>

int main(void)

{
  int num,mult;

  printf("Enter the no. do you print table:");
  scanf("%d",&num);
  printf("Table of %d is ready:\n",num);
  for(int i = 1; i<=10; i++)
  {
    mult = num*i;
	printf("%d X %d = %d\n",num,i,mult);
   
  }

  printf("\n");


return 0;
}
