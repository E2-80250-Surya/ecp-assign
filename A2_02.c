#include<stdio.h>

int main(void)
{

    int num1, num2,max;
    printf("Enter numbers: ");
    scanf("%d %d",&num1, &num2);

	if(num1 == num2)
	{
	printf("Both numbers are equal:");
	}
	else if(num1>num2)
	{
	printf("num1 is greater: ");
    }
	else
    printf("num2 is greater: ");

   return 0;

}
