#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr;

   ptr=(int*)calloc(5, sizeof(int));

   if(ptr==NULL)
   {
       printf(" Memory not allocated\n");
   }

   else
    printf("Memory allocation successfull\n");

   free(ptr);

   printf("Memory freed successfully\n");

    return 0;
}


