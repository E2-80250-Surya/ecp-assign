#include<stdio.h>
#include"fact.h"

int main(void)
{
      int num,f;
       printf("Enter the number: ");
	   scanf("%d",&num);
	   f = fact(num);
	   printf("fact of %d!= %d\n",num , f);


   return 0;

}
