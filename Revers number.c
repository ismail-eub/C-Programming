#include<stdio.h>
int main()  //It can't reverse 0 when remain 0 first in input.
{
    long long int num,r,temp;
    scanf("%lld",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        temp=temp/10;
        printf("%lld",r);
    }
    printf("\n");

    return 0;

}

//It can reverse 0 when remain 0 first in input.
#include <stdio.h>
#include <string.h>

int main()
{
    char numStr[20];  // Assuming a maximum of 20 digits
    scanf("%s", numStr);

    int len = strlen(numStr);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", numStr[i]);
    }

    printf("\n");

    return 0;
}


