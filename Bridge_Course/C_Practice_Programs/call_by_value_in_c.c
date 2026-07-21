//When learning C, it's important to understand the difference between:
//Call by Value → Function gets a copy of the variables.

//1. Addition using Call by Value
//The function receives copies of a and b.

#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 10;
    int b = 20;

    int sum = add(a, b);

    printf("Sum = %d\n", sum);

    return 0;
}
