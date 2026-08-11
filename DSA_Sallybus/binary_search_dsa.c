
// DSA - Binary Search without using function
// Array must be sorted in ascending order

#include <stdio.h>

int main()
{
    int key = 0;
    int left = 0;
    int right = 0;
    int mid = 0;
    int size = 0;

    // Accept array size
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    // Accept key
    printf("Enter key element to find: ");
    scanf("%d", &key);

    // Accept array elements
    printf("Enter array elements in ascending order: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initial search range
    left = 0;
    right = size - 1;

    // Binary search
    while(left <= right)
    {
        // Find middle position
        mid = left + (right - left) / 2; //this prevents overflow

        if(arr[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(arr[mid] < key)
        {
            // Search in right half
            left = mid + 1;
        }
        else
        {
            // Search in left half
            right = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}

