#include <stdio.h>

int main() {
    int rows;               // total number of rows
    int i, j;               // loop variables

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop: row number
    for (i = 1; i <= rows; i++) {

        // 1) Print leading spaces to center the pyramid
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // 2) Print numbers in ascending order: 1 2 3 ... i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Print numbers in descending order: i-1 ... 2 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // 4) Move to the next line after finishing the row
        printf("\n");
    }

    return 0;
}
