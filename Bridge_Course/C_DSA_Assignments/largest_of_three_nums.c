#include <stdio.h>

int main()
{
    // Variable declarations
    int a, b, c;

    // Read three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check which number is the largest
    if(a >= b && a >= c)
    {
        printf("%d is the largest number.", a);
    }
    else if(b >= a && b >= c)
    {
        printf("%d is the largest number.", b);
    }
    else
    {
        printf("%d is the largest number.", c);
    }

    return 0;
}
