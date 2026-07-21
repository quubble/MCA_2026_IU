#include <stdio.h>

enum Color {
    RED,
    BLUE,
    GREEN
};

int main() {

    enum Color c = GREEN;

    if(c == GREEN)
        printf("It is Green");

    return 0;
}


/* example 2
#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY
};

int main() {

    enum Day today = TUESDAY;

    printf("%d\n", today);

    return 0;
}
*/
