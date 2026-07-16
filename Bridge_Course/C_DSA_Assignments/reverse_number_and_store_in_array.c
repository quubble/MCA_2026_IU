#include <stdio.h>

int main() {
    int num, reversed = 0;
    int arr[1];   // an "empty" array with space for 1 integer

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;              // get last digit
        reversed = reversed * 10 + digit;  // build reversed number
        num /= 10;                         // remove last digit
    }

    // store the reversed number in the array
    arr[0] = reversed;

    // display from array
    printf("Reversed number (from array): %d\n", arr[0]);

    return 0;
}


