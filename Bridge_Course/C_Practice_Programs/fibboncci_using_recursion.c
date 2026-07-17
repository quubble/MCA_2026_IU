#include <stdio.h>

/* Function to return the nth Fibonacci number */
int fib(int n) {
    if (n == 0) {
        return 0;           // base case 1
    } else if (n == 1) {
        return 1;           // base case 2
    } else {
        return fib(n - 1) + fib(n - 2);  // recursive case
    }
}

int main() {
    int n, i;

    printf("Enter how many terms you want in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci series up to %d terms:\n", n);
        for (i = 0; i < n; i++) {
            printf("%d ", fib(i));
        }
        printf("\n");
    }

    return 0;
}
