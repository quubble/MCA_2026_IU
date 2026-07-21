//3. Addition and store result using a pointer
//Sometimes you don't return the sum. 
//Instead, you store it in another variable using a pointer.


#include <stdio.h>

void add(int *x, int *y, int *result)
{
    *result = *x + *y;
}

int main()
{
    int a = 10;
    int b = 20;
    int sum;

    add(&a, &b, &sum);

    printf("Sum = %d\n", sum);

    return 0;
}


/*
                                    Comparison
Call by Value	                          |      Call by Reference (Pointers)
Copies of variables are passed	        |      Addresses of variables are passed
Original variables cannot be modified	  |      Original variables can be modified
Uses normal variables	                  |      Uses pointers (*) and addresses (&)
                                        |
                                        |
                                        |
                                        |
                                              

*/
