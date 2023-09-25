#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   int count;

   printf("Enter number of students: \n");
   scanf("%d",&count);

   float *marks = (float *)calloc(count,sizeof(float));

   printf("Enter %d student mark :\n",count);

   for(int i = 0; i < count; i++)
      scanf("%f",&marks[i]);

   printf("Students marks: \n");
     for(int i = 0; i < count; i++)
	  printf("%d  student marks = %f \n",i+1,marks[i]);

	  printf("\n");

	  free(marks);
    


   return 0;

}
