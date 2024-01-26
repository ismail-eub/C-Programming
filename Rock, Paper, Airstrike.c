#include<stdio.h>
#include<string.h>
int main()
{
    char str1[8], str2[8];
    int i,n;
    scanf("%d",&n);

    for( i=0; i<n; i++)
    {
        scanf("%s %s",&str1, &str2);

        if(   strcmp(str1, "ataque")==0 && strcmp(str2, "pedra")==0 ||   strcmp(str1, "pedra")==0 && strcmp(str2,"papel")==0 ||  strcmp(str1, "papel")==0 && strcmp(str2,"ataque")==0 )
            printf("Jogador 1 venceu\n");

        else if( strcmp(str1, "papel")==0 && strcmp(str2,"papel")==0 )
            printf("Ambos venceram\n");

        else if( strcmp(str1, "pedra")==0 && strcmp(str2,"pedra")==0 )
            printf("Sem ganhador\n");

        else  if( strcmp(str1, "ataque")==0 && strcmp(str2,"ataque")==0 )
            printf("Aniquilacao mutua\n");

        else
            printf("Jogador 2 venceu\n");

    }
    return 0;



}



