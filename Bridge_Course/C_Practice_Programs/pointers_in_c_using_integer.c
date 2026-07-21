#include <stdio.h>

int main() {
    // Variables
    int a = 10;
    int b = 20;
    int c = 30;

    // Pointers
    int *p = &a;
    int *q = &b;
    int *r = &c;

    // Pointers to pointers
    int **pp = &p;
    int **qq = &q;
    int **rr = &r;

    printf("=== Pointer ===\n");
    printf("a = %d\n", a);
    printf("*p = %d\n", *p);

    printf("\n=== Pointer to Pointer ===\n");
    printf("**pp = %d\n", **pp);

    // Array of pointers
    int *ptrArray[3];

    ptrArray[0] = &a;
    ptrArray[1] = &b;
    ptrArray[2] = &c;

    printf("\n=== Array of Pointers ===\n");
    for (int i = 0; i < 3; i++) {
        printf("ptrArray[%d] = %p, value = %d\n",
               i, (void *)ptrArray[i], *ptrArray[i]);
    }

    // Array of pointers to pointers
    int **ppArray[3];

    ppArray[0] = &p;
    ppArray[1] = &q;
    ppArray[2] = &r;

    printf("\n=== Array of Pointers to Pointers ===\n");
    for (int i = 0; i < 3; i++) {
        printf("ppArray[%d] = %p, value = %d\n",
               i, (void *)ppArray[i], **ppArray[i]);
    }

    return 0;
}
