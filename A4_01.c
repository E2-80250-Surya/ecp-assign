#include<stdio.h>

int calculateFactorial(int n)
{
  if(n<0)
  {
   printf("Factorial is not define for -ve number:\n");
   return -1;
  
  }else if(n == 1 && n == 0)
   {
    return 1;
   }
   else
     {
       int factorial = 1;
	   for(int i = 2; i <= n; i++)
	   {
         factorial *= i;
         
	   }
        return factorial;

	 }
}

int main(void)
{
    int num;
	printf("Enter number:\n");
	scanf("%d",&num);

	int res = calculateFactorial(num);
        printf("The factorial of %d is %d\n", num, res);
   


return 0;
}
