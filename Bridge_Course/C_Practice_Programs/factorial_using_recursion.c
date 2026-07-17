#include <stdio.h>

/* Recursive function to calculate factorial */
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;              // base case
    } else {
        return n * factorial(n - 1);  // recursive call
    }
}

int main() {
    int n;
    long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(n);
        printf("Factorial of %d = %lld\n", n, result);
    }

    return 0;
}
