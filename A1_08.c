#include<stdio.h>

int main(void)
{
   int num,mult=1;
   printf("Enter the number:");
   scanf("%d",&num);

   for(int i = 1; i <= num; i++)
   {
    for(int j = num; j >= num;j--)
	{
    mult = i*j;
	if(mult == num)
	printf("%d * %d = %d",i,j,num);
    }
   }


return 0;
}
