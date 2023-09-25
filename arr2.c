#include<stdio.h>

  void accept_arr(int *ptr,int size);
  void print_arr(int *ptr,int size);
   
 int main(void)
 {
  int arr[5];
  accept_arr(arr,5);
  print_arr(arr,5);
  return 0;




 }


  void accept_arr(int *ptr,int size)
  {
    printf("Enter array element:\n");
	for(int i=0;i<size;i++)
	scanf("%d",&ptr[i]);

  }
  void print_arr(int *ptr,int size)
  {
    printf("Array:\n");
	for(int i=0;i<size;i++)
	printf("%d ",ptr[i]);	
	printf("\n");


  }
