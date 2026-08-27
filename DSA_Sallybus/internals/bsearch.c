/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//in binary search array must be sorted
#include <stdio.h>

void bsearch(int n, int key, int arr[]){
    int low=0, high=n-1;
    
    while (low <= high) {
        int mid = (low + (high-low) / 2);
        
        if(key == arr[mid]){
            printf("Element found at position %d\n", mid + 1);
            return;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
        
    }
    printf("Element not found\n");
}



int main()
{
    int arr[] = {8, 12, 23, 32, 45, 65, 77, 87,500};
    int key;

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter key element to search: ");
    scanf("%d", &key);

    bsearch(n, key, arr);

    return 0;
}
