#include<stdio.h>

int main(void)
{
   int num,fact,i;
   fact=i=1;
   printf("Input:\n");
   scanf("%d",&num);
   while(i<=num)
   {

	 fact = fact*i;
   	 i++;
   
    }
	 for(int j=1;j<=num;j++)
	 {
     if(j==num)
     	 {
            printf("%d",j);
         }
		   else
		{
		   printf("%d x ",j);

	 }
	 

	 }
	printf("= %d",fact);

return 0;
}
