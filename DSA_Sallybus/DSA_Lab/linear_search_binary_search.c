#include <stdio.h>

void lsearch(int n, int key, int arr[])
{
    for(int i =0; i<n;i++){
        if(arr[i]==key){
            printf("key found at %d position\n", i+1);
            return;
        }
    }
    printf("key not found\n");
}

int bis(int n, int key, int arr[])
{
    int left = 0;
    int right = n - 1;
    int mid;
    int found = -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            found = mid;
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

    return found;
}

int main()
{
    int n = 5, key = 120;
    int arr[] = {45,67, 120,890, 2100};
    lsearch(n, key, arr);
    
    int result = bis(n, key,arr);
    if(result !=-1)
    {
        printf("\nkey found at %d position", result+1);
    }
    else{
        printf("\n\nbs key not found");
    }

    return 0;
}
