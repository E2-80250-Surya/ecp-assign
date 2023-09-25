#include<stdio.h>

int main(void)
{
   int i=21,sum=0;
   do{
       sum += i;
	   i--;
       
     }while(i>11);
	 printf("sum=%d\n",sum);


return 0;
}
