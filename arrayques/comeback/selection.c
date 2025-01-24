#include <stdio.h>

int main()
{
    int i, j, min, temp, n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n]; // Variable-length array (VLAs)

    // Input array elements
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for (i = 0; i < n - 1; i++)
    {            // The last element is already sorted
        min = i; // Assume the minimum is at position i

        // Find the smallest element in the remaining unsorted array
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j; // Update the index of the minimum element
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }

    // Output the sorted array
    printf("Sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
