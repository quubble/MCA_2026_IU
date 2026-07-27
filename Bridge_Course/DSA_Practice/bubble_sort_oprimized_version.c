#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("After sorting:  ");
    printArray(arr, n);

    return 0;
}



/*

What the flag does
swapped starts as 0 at the beginning of each pass.
If any swap happens, we set it to 1.
If a full pass finishes with no swaps, 
it means the array is already sorted, 
so we stop early using break.

This makes bubble sort faster 
on nearly sorted arrays.



Complexity
Worst case: O(n^2)

Average case: O(n^2)

Best case: O(n) when the array is already sorted or becomes sorted early

Space complexity is still O(1) because it uses only a few extra variables.

Easy way to remember
Normal bubble sort: always does all passes.

Optimized bubble sort: stops when no swaps happen.

*/
