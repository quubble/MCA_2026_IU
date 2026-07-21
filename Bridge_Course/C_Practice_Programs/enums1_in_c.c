#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight signal = YELLOW;

    if (signal == RED)
        printf("Stop");
    else if (signal == YELLOW)
        printf("Wait");
    else
        printf("Go");

    return 0;
}


/*Key points to remember

    An enum is a user-defined type whose values are named integer constants.
    By default, the first enumerator has value 0, and each following one increases by 1.
    You can assign custom values, and subsequent values continue counting from the last assigned value.
    Enums improve readability and help avoid using unexplained "magic numbers" in your code.
    Internally, enum values are represented as integers, so you can print them with %d or compare them just like integers.
*/
