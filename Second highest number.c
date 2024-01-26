#include <stdio.h>

int main()
{
    int n;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size 'n'
    int arr[n];

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find the second highest number
    int first_max, second_max;

    if (arr[0] > arr[1])
    {
        first_max = arr[0];
        second_max = arr[1];
    }
    else
    {
        first_max = arr[1];
        second_max = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > first_max)
        {
            second_max = first_max;
            first_max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != first_max)
        {
            second_max = arr[i];
        }
    }

    // Output the second highest number
    printf("The second-highest number is: %d\n", second_max);

    return 0;
}
