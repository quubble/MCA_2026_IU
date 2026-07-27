#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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
How it works
Bubble sort compares two adjacent numbers at a time. 
If the left number is bigger, it swaps them. 
After one full pass, the biggest number moves to 
the end of the array, like a bubble rising to the top. 
That is why the algorithm is called bubble sort.

The outer loop controls how many passes happen,
and the inner loop compares the adjacent elements
in each pass. The inner loop gets shorter each time,
because the last part is already sorted

*/
