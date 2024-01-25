#include<stdio.h>
int main()
{
    FILE *file;


    char name[20];



    file = fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File dose not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your full name:");
        gets(name);

        fputs("\n",file);
        fputs(name,file);


        printf("File written successfully\n");
        fclose(file);
    }


    getchar();
}


