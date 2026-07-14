// ## (I) Three Points on a Straight Line

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter x1 y1: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%d%d", &x2, &y2);

    printf("Enter x3 y3: ");
    scanf("%d%d", &x3, &y3);

    if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1))
        printf("Points are Collinear");
    else
        printf("Points are Not Collinear");

    return 0;
}
