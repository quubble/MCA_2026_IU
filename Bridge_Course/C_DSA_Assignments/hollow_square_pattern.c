//Print hollow square star pattern in c

#include <stdio.h>

int main()
{
    int i, j;   // i = row counter, j = column counter

    // Outer loop controls the rows
    for(i = 1; i <= 4; i++)
    {
        // Inner loop controls the columns
        for(j = 1; j <= 4; j++)
        {
            // Print star on the border
            if(i == 1 || i == 4 || j == 1 || j == 4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");   // Print two spaces inside
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
