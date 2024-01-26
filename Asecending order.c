#include <stdio.h>

int main()
{
    int num[7] = {20, 18, 23, 25, 16, 10, 15};
    int temp, i, j;

    for (i = 0; i < 7 ; i++)
    {
        for (j = 0; j < 7 - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 7; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
