#include <stdio.h>

void lsearch(int n, int key, int arr[])
{
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Key found at position %d\n", i + 1);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Key not found\n");
    }
}

void bis(int n, int key, int arr[])
{
    int left = 0;
    int right = n - 1;
    int mid;
    int found = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            found = 1;

            // Print the current position
            printf("Key found at position %d\n", mid + 1);

            // Check left side for duplicates
            int i = mid - 1;
            while (i >= 0 && arr[i] == key)
            {
                printf("Key found at position %d\n", i + 1);
                i--;
            }

            // Check right side for duplicates
            i = mid + 1;
            while (i < n && arr[i] == key)
            {
                printf("Key found at position %d\n", i + 1);
                i++;
            }

            break;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("Key not found\n");
    }
}

int main()
{
    int n = 8, key = 120;

    int arr[] = {45, 67, 120, 120, 120, 890, 1200, 2100};

    printf("Linear Search:\n");
    lsearch(n, key, arr);

    printf("\nBinary Search:\n");
    bis(n, key, arr);

    return 0;
}
