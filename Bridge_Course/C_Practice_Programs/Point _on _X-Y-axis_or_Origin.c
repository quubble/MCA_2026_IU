// ## (K) Point on X-axis, Y-axis or Origin

c
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);

    if (x == 0 && y == 0)
        printf("Point is at Origin");
    else if (x == 0)
        printf("Point is on Y-axis");
    else if (y == 0)
        printf("Point is on X-axis");
    else
        printf("Point is in Neither Axis");

    return 0;
}
