#include<stdio.h>
int main(void)
{
int num,rem,sum=0;
printf("Enter the number:\n");
scanf("%d",&num);
for(num; num != 0; num = num/10)
{
   rem = num % 10;
   sum = sum + rem;

} 
printf("The sum of digits is:%d",sum);



return 0;
}
