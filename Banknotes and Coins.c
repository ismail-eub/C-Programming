#include <stdio.h>

int main()
{
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int moedas[] = {50, 25, 10, 5, 1};
    double n;

    scanf("%lf", &n);
    int totalCents = (n * 100);

    if (totalCents % 10 == 9)
    {
        totalCents++;
    }

    printf("NOTAS:\n");

    for (int i = 0; i < 6; i++)
    {
        int count = totalCents / (notas[i] * 100);
        totalCents %= notas[i] * 100;
        printf("%d nota(s) de R$ %.2lf\n", count, (double)notas[i]);
    }

    printf("MOEDAS:\n");

    for (int i = 0; i < 5; i++)
    {
        int count = totalCents / moedas[i];
        totalCents %= moedas[i];
        printf("%d moeda(s) de R$ %.2lf\n", count, (double)moedas[i] / 100);
    }

    return 0;
}
