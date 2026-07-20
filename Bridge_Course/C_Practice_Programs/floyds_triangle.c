#include <stdio.h>

int main() {
    int n, i, j;
    int val = 1;  // start from 1

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // outer loop for rows
    for (i = 1; i <= n; i++) {
        // inner loop for columns in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", val);
            val++;  // next number
        }
        printf("\n");  // move to next row
    }

    return 0;
}
