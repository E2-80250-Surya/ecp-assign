#include<stdio.h>

int main(void)
{
   int num,count=0;
   printf("Enter the number for checking prime or not!: ");
   scanf("%d",&num);
    for(int i=1; i<=num; i++)
	{
     if(num%i == 0)
	 {
	 count++;

    
    }
	}
	if(count == 2)
	{
	printf("Enterd number is prime");
	}
	else
	{
	printf("Entered number is not prime");
	}

   return 0;

}
