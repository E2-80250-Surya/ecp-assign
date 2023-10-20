#include<stdio.h>
int calculatePower(int base,int index)
 {
 int pow = 1;
  if(base == 1)
   {
    printf("power of 1 is always 1:\n");
	return 1;
   }
   else if(index == 1)
   {
     return base;
   }
   else
   {
   
	 for(int i = 1; i <= index; i++)
	 {
      pow *= base ;
      
	 }
	 return pow;
   }

 }

int main(void)
{
 int base,power;
 printf("Enter base and power:\n");
 scanf("%d %d",&base,&power);
 int pow = calculatePower(base,power);
 printf("power = %d ",pow);


return 0;
}
