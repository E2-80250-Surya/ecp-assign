#include<stdio.h>
#include"mymath.h"

int main(void)
{

   int  num1 = 2, num2 = 4;

   printf("sum = %d\n", add(num1, num2));

   printf("sub = %d\n",div(num1, num2));

   printf("multiplication = %d\n", mult(num1, num2));

   printf("Quotient = %d\n", div(num1, num2));

   return 0;
}
