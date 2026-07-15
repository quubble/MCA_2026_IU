//even odd

#include <stdio.h>

int main(void) {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("a is even");
    } else {
        printf("a is odd");
    }

    return 0;
}
