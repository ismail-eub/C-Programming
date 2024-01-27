//with function
#include<stdio.h>
#include<string.h>
int main()
{

    char str[]="Arafat";
     int len=strlen(str);

    printf("Length = %d\n",len);



//without function
    int i=0, length=0;
    while(str[i]!= '\0')
    {
        i++;
        length++;
    }
    printf("Length. = %d\n",length);

    return 0;
}
