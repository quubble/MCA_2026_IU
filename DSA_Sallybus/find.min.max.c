#include <stdio.h>

int findMin(int n, int arr[]) {
    int min = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int findMax(int n, int arr[]) {
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {10, 5, 8, 20, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(n, arr);
    int max = findMax(n, arr);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
