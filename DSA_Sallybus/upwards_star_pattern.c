#include <stdio.h>

//upward_star_pattern.c

int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)  //core logic begins
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }          //core logic ends

    return 0;
}
