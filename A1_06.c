#include<stdio.h>

int main(void)
{
   int num;
   int fact=1;
   printf("Enete the number:");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)

  {
    fact *= i;
  }
    printf("fact=%d\n",fact);
	printf("fact of %d:",num);
   for(int j=num;j>=1;j--)
   {
     if(j==1)
	 {
       printf("%d",j);
	 }
     else
	 {
       printf("%d X ",j);
	 }


   }
     printf("= %d\n",fact);
return 0;
}
