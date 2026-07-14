// ## (F) Youngest of Three

#include <stdio.h>

int main() {
    int ram, shyam, ajay;

    printf("Enter ages of Ram, Shyam and Ajay: ");
    scanf("%d%d%d", &ram, &shyam, &ajay);

    if (ram < shyam && ram < ajay)
        printf("Ram is Youngest");
    else if (shyam < ram && shyam < ajay)
        printf("Shyam is Youngest");
    else
        printf("Ajay is Youngest");

    return 0;
}
