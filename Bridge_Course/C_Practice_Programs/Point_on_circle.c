// ## (J) Point Inside, On or Outside a Circle

`c
#include <stdio.h>
#include <math.h>

int main() {
    float x, y, h, k, r, d;

    printf("Enter center (h k): ");
    scanf("%f%f", &h, &k);

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Enter point (x y): ");
    scanf("%f%f", &x, &y);

    d = sqrt(pow(x - h, 2) + pow(y - k, 2));

if (d < r)
        printf("Point is Inside the Circle");
    else if (d == r)
        printf("Point is On the Circle");
    else
        printf("Point is Outside the Circle");

    return 0;
}
