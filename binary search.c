
#include <stdio.h>

int binary_search(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if target is present at the midpoint
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            // If target is greater, ignore the left half
            low = mid + 1;
        }
        else
        {
            // If target is smaller, ignore the right half
            high = mid - 1;
        }
    }

    // If we reach here, the element was not present
    return -1;
}


int main()
{
    int sorted_array[] = {2, 4, 7, 12, 16, 22, 25, 30, 35};
    int size = sizeof(sorted_array) / sizeof(sorted_array[0]);
    int target_value = 31;

    int result = binary_search(sorted_array, size, target_value);


    if (result != -1)
    {
        printf("Element %d is present at index %d.\n", target_value, result);
    }
    else
    {
        printf("Element %d is not present in the array.\n", target_value);
    }

    return 0;
}
