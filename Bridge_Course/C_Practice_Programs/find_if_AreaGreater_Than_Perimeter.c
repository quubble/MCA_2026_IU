// ## (H) Area Greater than Perimeter

#include <stdio.h>

int main() {
    int l, b, area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%d%d", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    if (area > perimeter)
        printf("Area is Greater than Perimeter");
    else
        printf("Area is Not Greater than Perimeter");

    return 0;
}
