#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int arr[3] = {a, b, c};

    // Sort the array in ascending order
    bubbleSort(arr, 3);

    // Print the sorted array
    printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);

    return 0;
}

