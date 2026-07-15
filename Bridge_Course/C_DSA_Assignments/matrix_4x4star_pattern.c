#include <stdio.h>

int main()
{
    int i, j;   // i = row counter, j = column counter

    // Outer loop controls the rows
    for (i = 1; i <= 4; i++)
    {
        // Inner loop prints 4 stars in each row
        for (j = 1; j <= 4; j++)
        {
            printf("* ");
        }

        // Move to the next line after printing one row
        printf("\n");
    }

    return 0;
}
