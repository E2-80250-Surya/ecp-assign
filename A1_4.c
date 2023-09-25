#include<stdio.h>

int main(void)
{
  int num,rem,rev=0;
  printf("Enter the number do you want to reverse:");
  scanf("%d",&num);
 for(num; num != 0; num = num/10)
  {
    rem = num % 10;
    rev = rev * 10 + rem;

  }

  printf("The reverse number:%d\n",rev);
  if(num == rev)
  printf("The number is palindrom\n");
else
  printf("The number is not palindrom\n");

return 0;
}
