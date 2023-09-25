#include<stdio.h>

int main(void)
{
  int num,check_num,rem,rev=0;
  printf("Enter the number do you want to reverse:");
  scanf("%d",&num);
  check_num = num;
 for(num; num != 0; num = num/10)
  {
    rem = num % 10;
    rev = rev * 10 + rem;

  }

  printf("The reverse number:%d\n",rev);
  if(check_num == rev)
  {
  printf("The number is palindrom\n");
  }
else
  printf("The number is not palindrom\n");
  
return 0;
}
