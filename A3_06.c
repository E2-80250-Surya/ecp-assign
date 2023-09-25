#include<stdio.h>

int main(void)
{
   int num = 10;
   char ch = 'A';
   double d = 3.143;
   
   int *pnum  = &num;
   char *pch = &ch;
   double *pd = &d;
    printf("num = %d, ch = %c, d = %lf\n",num, ch, d);
	printf("*pnum = %d, *pch = %c, *pd = %lf\n",*pnum, *pch,*pd);

	printf("&num = %lu,&ch = %lu, &d = %lu\n",&num, &ch,&d);
    printf("pnum = %lu, pch = %lu, pd = %lu\n",pnum,pch,pd);

   return 0;

}
