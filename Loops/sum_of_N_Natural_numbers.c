/******************************************************************************

                            Online C Compiler - https://onlinegdb.com/
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Calculate and print the sum of the first n natural numbers.
#include<stdio.h>

void sum(int n){
    int sum = 0;
    for(int i =0; i<=n; i++){
        sum = sum + i;
    }
    
    
printf("the sum is: %d", sum);
}
#include <stdio.h>

int main()
{
  int num =0;
  printf("Enter the natural number to sum upto: ");
  scanf("%d", &num);
  sum(num);  

    return 0;
}
