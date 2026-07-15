#include <stdio.h>

int main(void) {
    int i, j, n;

    // Ask user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop controls each row
    for(i = 1; i <= n; i++) {
        
        // Inner loop prints stars in the current row
        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
