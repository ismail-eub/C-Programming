#include<stdio.h>
int main()
{
    int LA[7]={5,10,15,20,25};
    int n=5,k=2,item;
    item = LA[k];
    int j;
   for(j=k; j<=n; j++)
   {
       LA[j]= LA[j+1];

   }
    n=n-1;
    int i;
    printf("Deleted element %d\n",item);

    for(i=0; i<n; i++)
    {

        printf("%d ", LA[i]);
    }

    return 0;
}

