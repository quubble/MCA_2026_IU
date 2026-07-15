#include <stdio.h>

int main()
{
    int n;      // Number entered by the user
    int i;     // Current number being checked
    int j;     // Used to check divisibility
    int prime;       // 1 = Prime, 0 = Not Prime

    // Take input from the user
    printf("Enter the last number: ");
    scanf("%d", &number);

    // Display heading
    printf("Prime numbers are:\n");

    // Check every number from 2 up to the entered number
    for (i = 2; i <= number; i++)
    {
        // Assume the current number is prime
        prime = 1;

        // Check if the current number is divisible
        // by any number from 2 to i - 1
        for (j = 2; j < i; j++)
        {
            // If remainder is 0, it is divisible
            if (i % j == 0)
            {
                prime = 0;   // Not a prime number
                break;       // No need to check further
            }
        }

        // If the number is still prime, print it
        if (prime == 1)
        {
            printf("%d ", current);
        }
    }

    return 0;
}
