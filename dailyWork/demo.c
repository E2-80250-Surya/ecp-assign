#include<stdio.h>
int main(void)
{
  //int num,fact;
  // fact = factorial(num);
  //Printf("Enter the number:\n");
  //scanf("%d",&num);

  int fact = factorial(5);
  return 0;
  int factorial(int num)
 
  {
  if(num==1)
  return 1;
  return num*factorial(num-1);
  }

}
