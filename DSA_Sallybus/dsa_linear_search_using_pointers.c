//dsa_linear_search_using_pointers - here size of the array is not declared

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = NULL;
    int n = 0;    //number of elements
    int x;    //temp variable to hold user element
    int key;   //element to find in array
    int i;

    printf("Enter elements (-1 to stop):\n");

    while (1)
    {
        scanf("%d", &x);

        if (x == -1)
            break;

        arr = realloc(arr, (n + 1) * sizeof(int)); //core important logic

        arr[n] = x;
        n++;
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            free(arr);
            return 0;
        }
    }

    printf("Element Not Found\n");

    free(arr);

    return 0;
}
