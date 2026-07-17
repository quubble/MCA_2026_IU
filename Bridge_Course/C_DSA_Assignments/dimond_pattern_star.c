//Diamond star pattern
// key logic - Space - j<= (n-i)
// key logic - Stars - j<=(2*i-1)


#include <stdio.h>

int main()
{
    int n, i, j;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // -------- Upper Half --------
    for(i = 1; i <= n; i++)
    {
        // Print leading spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    // -------- Lower Half --------
    for(i = n - 1; i >= 1; i--)
    {
        // Print leading spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

