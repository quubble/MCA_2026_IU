// Hatf Pyramid inverted star pattern 

#include <stdio.h>

int main()
{
    int n;
    int i, j;

    // Ask the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop controls the rows
    for(i = n; i >= 1; i--)
    {
        // Inner loop prints stars
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
