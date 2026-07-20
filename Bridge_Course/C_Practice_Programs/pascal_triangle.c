#include <stdio.h>

int main() {
    int rows, i, j;
    long val;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }

        val = 1;
        // Print values in the row
      // important logic
        for (j = 0; j <= i; j++) {
            printf("%4lld", val);
          //Using the formula of binomial coefficient here
            val = val * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}

