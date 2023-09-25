#include<stdio.h>
int calculate(int , int ,char);

int main(void)
{
  int num1, num2;
  char oper,ch;
   do
   {
       printf("Enter num1 oper num2 : ");
	   scanf("%d %c %d",&num1, &oper, &num2);

       if(oper == '/' && num2 == 0)
	   {

	   printf("Divide by zero error \n");
	   goto label;
	   }
       printf("%d %c %d = %d\n",num1, oper, num2,calculate(num1,num2,oper));

	   label:

	   printf("Do you want to continue(y/n):");
	   scanf("%*c %c",&ch);


   }
    while(ch != 'n');

   return 0;

}
int calculate(int num1,int num2, char oper)
{
   int res;
   switch(oper)
    {
      case '+':

	        res = num1 + num2;
			break;
	   case '-':
	         res = num1 - num2;
			 break;

		case  '*': 
		      res = num1 * num2;
			  break;

		case '/':
		      res = num1 / num2;
			  break;

		     

	}
	return res;
   
}
