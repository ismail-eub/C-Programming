#include<stdio.h>
int main()
{
    int LA[7]={1,2,3,4,5};
    int n=5,k=2,item=100;
    int j=n;
    while(j>=k)
    {
        LA[j+1] = LA[j];
        j--;

    }
    LA[k]=item;
    n=n+1;
    int i;
    for(i=0; i<n; i++)
    {

        printf("%d ", LA[i]);
    }

    return 0;
}
