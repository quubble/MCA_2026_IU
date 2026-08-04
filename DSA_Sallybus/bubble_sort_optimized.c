//bubble sort optimised 

#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    bool swapped;

    // Outer loop: total passes ke liye
    for (i = 0; i < n - 1; i++) {
        // Har pass ke start mein assume karte hain ki swap nahi hua
        swapped = false;

        // Inner loop: adjacent elements compare karne ke liye
        for (j = 0; j < n - i - 1; j++) {
            // Agar left element right element se bada hai
            if (arr[j] > arr[j + 1]) {
                // Dono elements ko swap kar rahe hain
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Swap hua hai, isliye flag true
                swapped = true;
            }
        }

        // Agar is pass mein koi swap nahi hua, array already sorted hai
        if (swapped == false) {
            break;
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    bubbleSort(arr, n);

    // Sorted array print kar rahe hain
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
