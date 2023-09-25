#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   int length;

   printf("Enter length  of array :\n");
   scanf("%d",&length);

  int *ptr = (int *)malloc(length*sizeof(int));

  for(int i = 0; i < length; i++)
         ptr[i] = i + 10;


   printf("Stored value:\n ");

     for(int i = 0; i < length; i++)
	    printf("value of [%d] = %d",i,ptr[i]);

		printf("\n");

     free(ptr);
   return 0; 

}
