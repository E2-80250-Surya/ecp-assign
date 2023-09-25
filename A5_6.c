#include<stdio.h>

int main(void)
{

  int arr[3][4] = {11,22,33,44,10,20,30,40,1,2,3,4};
  
  printf("2D array :\n");
  for(int i = 0; i < 3; i++)
  {
   for(int j = 0; j < 4; j++)
   {
    printf("%-4d",arr[i][j]);
   

   }
    printf("\n");


  }
  


   return 0;

}
