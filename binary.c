#include<stdio.h>

int main()
{
 int binary[32];
 int count = 0;
 int num;

 printf("Enter number:\n");
 scanf("%d",&num);

 if(num == 0)
 {
  printf("Numeber is binary!\n");
  return;
 }

 while(num > 0)
 {
   binary[count] = num % 2;
   num = num / 2;
   count++;

 }
  printf("Binary:");
  for(int i = count -1; i >= 0; i--)
  {
    printf("%d",binary[i]);
  }
    printf("\n");
 return 0;
}
