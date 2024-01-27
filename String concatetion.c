#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="My name is";
    char str2[]=" Anisul Islam";

    strcat(str1,str2);  //strcat(str1," Anisul Islam");

    printf("Str1 = %s\n",str1);
}
