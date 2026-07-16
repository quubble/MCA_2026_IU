#include <stdio.h>

int main()
{
    // Variable declarations
    int n, i;
    int first = 0, second = 1, next;

    // Read the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Check for invalid input
    if(n <= 0)
    {
        printf("Please enter a positive number.");
    }
    else
    {
        printf("Fibonacci Series:\n");

        // Print the series using a loop
        for(i = 1; i <= n; i++)
        {
            printf("%d ", first);

            // Calculate the next term
            next = first + second;

            // Update the values
            first = second;
            second = next;
        }
    }

    return 0;
}
