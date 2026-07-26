#include <stdio.h>

int main() {
    int source[] = {10, 20, 30, 40, 50};
    int n = sizeof(source) / sizeof(source[0]);
    int destination[n];

    // Copy elements
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}
