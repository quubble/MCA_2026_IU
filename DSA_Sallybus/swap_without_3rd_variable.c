/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Swaping values without using third variable

#include <stdio.h>

int main()
{
    int a= 85;
    int b = 96;
    
    printf("before swaping: %d %d\n", a, b);
    
    a = a+b;
    printf("first swap: %d \n", a); //observing values
    
    b = a-b;
    printf("second swap: %d \n",b); //observing values
    
    a = a-b;
    printf("third swap: %d \n",a); //observing values
    
    printf("\nafter final value swaping: %d %d\n", a, b);

    return 0;
}