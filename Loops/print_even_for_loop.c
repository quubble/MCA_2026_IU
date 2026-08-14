//Print all even numbers between 1 and 100.

#include <stdio.h>

void print_even(int arr[]) {
    int i =0;

    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            printf(" %d ", arr[i]);
        }
    }
}

int main() {
    int arr[10];
    
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nAll even numbers are: ");
    print_even(arr);

    return 0;
}
