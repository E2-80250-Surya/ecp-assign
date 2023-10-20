#include<stdio.h>

int main(void)
{
   // simple calculater
   double num1, num2;
   char oper;
   double res;
   
   printf("Enter 1st number:\n");
   scanf("%lf",&num1);
   printf("Enter operator:");
   scanf("%*c %c",&oper);
   printf("Enter 2nd number:\n");
   scanf("%lf",&num2);

   if(oper == '+')
     res = num1 + num2;

	else if(oper == '-')
       res = num1 - num2;

	else if(oper == '*')
	    res = num1 * num2;

	else if(oper == '/')
	     res = num1/num2;

	else
	{
	    printf("invalid operator! Please try with valid operator");

     }

	 printf("Resule = %lf",res);
   
   

   return 0;

}
