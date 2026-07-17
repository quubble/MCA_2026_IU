// hollow pyramid triangle using stars
// key: if condition 

#include <stdio.h>

int main()
{
    int i, j, n;

    // Ask the user to enter the number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop controls the rows
    for(i = 1; i <= n; i++)
    {
        // Print leading spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars and inside spaces
        for(j = 1; j <= 2 * i - 1; j++)
        {
            if(i == n || j == 1 || j == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
