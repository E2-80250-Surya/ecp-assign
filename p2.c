#include<stdio.h>
int main(void)
{
  double num = 10.12;
  double *pnum = &num;
  double **ppnum = &pnum;

  printf("%lf\n",num);
  printf("%lf\n",*pnum);
  printf("%lf\n",**ppnum);




return 0;
}
