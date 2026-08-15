// DSA - Binary Search using function
// Array must be sorted in ascending order

#include <stdio.h>

// Binary Search Function
int binarySearch(int arr[], int size, int key)
{
    int left = 0;
    int right = size - 1;
    int mid;

    while(left <= right)
    {
        // Find middle position
        mid = left + (right - left) / 2;

        if(arr[mid] == key)
        {
            return mid;   // Return index if element is found
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

    return -1;   // Element not found
}

int main()
{
    int key = 0;
    int size = 0;
    int result;

    // Accept array size
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    // Accept array elements
    printf("Enter array elements in ascending order: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Accept element to find
    printf("Enter key element to find: ");
    scanf("%d", &key);
    

    // Call binary search function
    result = binarySearch(arr, size, key);

    if(result != -1)
    {
        printf("Element found at %dth index with %dth position ", result, result + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}