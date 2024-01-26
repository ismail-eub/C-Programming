#include<stdio.h>
int main()
{
    int i,j,k,l,m,n, arr[102][102];

    while(scanf("%d",&n)!=EOF)
    {
        k=n-1;
        for(i=0; i<n; i++)
        {

            for(j=0; j<n; j++)
            {

                if(i==j) arr[i][j]=1;
                else arr[i][j]=3 ;
                if(j==k) arr[i][j]=2 ;
                if(n%2!=0)
                {
                    l=n/2;
                    arr[l][l]=2 ;
                }




            }
            k--;
        }




        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }




    return 0;
}

