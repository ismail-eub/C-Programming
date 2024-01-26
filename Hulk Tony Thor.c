#include<stdio.h>
#include<string.h>
int main()
{
  char ch[10];
  int i, n,x;
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
      scanf("%s %d",&ch,&x);

      if( strcmp(ch,"Thor") ==0 )

      printf("Y\n");

      else
        printf("N\n");

  }




}
