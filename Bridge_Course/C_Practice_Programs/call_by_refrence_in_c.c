//2. Addition using Pointers (Call by Reference)
//The function receives the addresses of the variables.


#include <stdio.h>

int add(int *x, int *y)
{
    return *x + *y;
}

int main()
{
    int a = 10;
    int b = 20;

    int sum = add(&a, &b);

    printf("Sum = %d\n", sum);

    return 0;
}
