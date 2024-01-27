//with function

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Ismail Hossain";
    printf("%s\n",str);

    strrev(str);
    printf("Str = %s\n",str);

    return 0;

}

//without function
#include<stdio.h>
int main()
{
    char str1[30]="Ismail Hossain";
    char str2[30];
    int i=0,j, len=0;

    while(str1[i] !='\0')
    {
        i++;
        len++;
    }

    for(j=0; i=len-1; i>=0; i--; j++)
    {
        str2[j]=str1[i];
    }

    printf("%s\n",str1);
    printf("%s\n",str2);

    return 0;
}
