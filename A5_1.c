#include<stdio.h>
#include<string.h>

int main(void)
{
   int num = 10;
   float flt;

   memcpy(&flt,&num,sizeof(num));

   printf("flt = %f\n",flt);
   printf("flt = %d\n",*((int *)&flt));

   char str1[] = "12345";
   char str2[] = "54321";
   
   printf("Before : str1 = %s, str2 = %s\n",str1,str2);

   memcpy(str2, str1, sizeof(str1));

   printf("Before : str1 = %s, str2 = %s\n",str1,str2);
   



   return 0;

}
