#include <stdio.h>

void print_odd(int arr[]) {
    int i = 0;

    while (i < 100) {
        if (arr[i] % 2 != 0) {
            printf(" %d ", arr[i]);
        }
        i++;
    }
}

int main() {
    int arr[100];
    int i = 0;

    while (i < 100) {
        scanf("%d", &arr[i]);
        i++;
    }

    printf("\nAll odd numbers are: ");
    print_odd(arr);

    return 0;
}
