#include<stdio.h>

int main(void)
{
  char str1[] = "Surya";

  printf("Base address of str1 = %u\n",str1);
  
  printf("String str1 = %s\n",str1);

  printf(" Address of whole str1 array (&str1) = %u\n",&str1);
   
  printf("str1 + 1 = %u\n",str1 + 1);
  printf("&str1 + 1 = %u\n",&str1 + 1);
  
  char *ptr1 = str1;

  printf("str1 = %u, ptr1 = %u, *ptr1 = %c\n",str1,ptr1,*ptr1);
  
  char (*ptr2)[7] = &str1;

  printf("&str1 = %u, ptr2 = %u,*ptr2 = %u\n",&str1,ptr2,*ptr2);
   
   return 0;

}
