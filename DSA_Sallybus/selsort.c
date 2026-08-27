#include <stdio.h>

void selectionSort(int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Swap
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int arr[] = {45, 12, 8, 32, 23};

    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(n, arr);

    printf("Sorted array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
