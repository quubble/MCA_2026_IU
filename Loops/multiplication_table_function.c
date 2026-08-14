/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void multiplication_table(int n){
    
    int i=0;
    for(i = 1; i<= 10; i++){
        
        printf("%d x %d = %d\n", n, i, (n*i));
    }
}

int main()
{
    int num =0;
    printf("enter number to print the table for:  ");
    scanf("%d", &num);
    
    printf("\nthe multiplication table for %d is: \n\n" , num);
    multiplication_table(num);

    return 0;
}