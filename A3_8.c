#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int length;

  printf("Enter length of array : ");
  scanf("%d",&length);

  void *ptr = malloc(length * sizeof(int));

  for(int i = 0; i < length; i++)
    *((int *)ptr + i) = i + 10;
	printf("Stored values : ");
	for(int i = 0; i < length ; i++)
	 printf("%-4d",*((int *)ptr + i));

	 printf("\n");


   return 0;

}
