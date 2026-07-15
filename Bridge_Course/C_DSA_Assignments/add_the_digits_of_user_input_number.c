#include <stdio.h>

int main()
{
    int number, digit, sum = 0;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the sum of digits
    while (number != 0)
    {
        // Extract the last digit
        digit = number % 10;

        // Add the digit to the sum
        sum = sum + digit;

        // Remove the last digit from the number
        number = number / 10;
    }

    // Display the result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
