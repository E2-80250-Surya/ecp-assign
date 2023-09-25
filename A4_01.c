#include<stdio.h>

int main(void)
{
   int num = 12;
   int *pnum = &num;
   int **ppnum = &pnum;

    printf("num = %d\n",num);
    printf("*pnum = %d\n",*pnum);
    printf("**ppnum = %d\n",**ppnum);

    printf("&num = %u\n",&num);
    printf("pnum = %u\n",pnum);
    printf("&pnum = %u\n",&pnum);
    printf("ppnum = %u\n",ppnum);
    


   return 0;

}
