#include <stdio.h>

enum Month {
    JAN = 1,
    FEB,
    MAR
};

int main() {

    printf("%d\n", JAN);
    printf("%d\n", FEB);
    printf("%d\n", MAR);

    return 0;
}

/*
you can also skip values in enums

enum ErrorCode {
    SUCCESS = 100,
    WARNING = 200,
    ERROR = 500
};

*/
