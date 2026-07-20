#include <stdio.h>
// Program showing XOR operater in C

int main() {
    int a = 5;    // 0101 in binary
    int b = 3;    // 0011 in binary

    int c = a ^ b;   // XOR of a and b
                     //[0 0=0, 0 1=1,1 1=0,1 0=1]

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("a ^ b = %d\n", c);

    return 0;
}
