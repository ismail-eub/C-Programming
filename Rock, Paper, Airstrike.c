#include <stdio.h>
#include <string.h>

int main()
{
    int temp;
    scanf("%d", &temp);

    char A[10], B[10];

    while (scanf("%s %s", A, B) != EOF)
    {
        if (strcmp(A, "ataque") == 0 && strcmp(B, "ataque") == 0)
        {
            printf("Aniquilacao mutua\n");
        }
        else if (strcmp(A, "pedra") == 0 && strcmp(B, "pedra") == 0)
        {
            printf("Sem ganhador\n");
        }
        else if (strcmp(A, "papel") == 0 && strcmp(B, "papel") == 0)
        {
            printf("Ambos venceram\n");
        }
        else if (strcmp(A, "ataque") == 0)
        {
            printf("Jogador 1 venceu\n");
        }
        else if (strcmp(B, "ataque") == 0)
        {
            printf("Jogador 2 venceu\n");
        }
        else if (strcmp(A, "pedra") == 0)
        {
            printf("Jogador 1 venceu\n");
        }
        else if (strcmp(B, "pedra") == 0)
        {
            printf("Jogador 2 venceu\n");
        }
    }

    return 0;
}
