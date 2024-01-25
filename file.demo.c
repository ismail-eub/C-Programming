#include<stdio.h>
int main()
{
 FILE *file;


 char name[20]= "Ismail Hossain";

 int length= strlen(name);
 int i;
 file = fopen("test.txt","w");

 if(file==NULL)
 {
     printf("File dose not exist ");
 }
 else
 {
    printf("File is opened\n");

    for(i=0; i<length; i++)
    {
        fputc(name[i],file);
    }
    printf("File written successfully\n");
    fclose(file);
 }


 getchar();
}


