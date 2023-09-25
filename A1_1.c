#include<stdio.h>

int main(void)
{
   int num;
   char ch;

   printf("Enter the character:\n");
   scanf("%c",&ch);
   printf("Enter the number:\n");
   scanf("%d",&num);
   printf("You have to print %c for %d times :\n",ch,num);

   for(int i=1; i<=num;i++)
   {
     printf("%c",ch);
   }
    printf("\n");
   return 0;

}
