/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
//Bubble sort repeatedly compares adjacent elements and 
//swaps them if they are in the wrong order.

void bsort(int n, int arr[]){
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}




int main()
{
    int arr[] = {45, 1,77,243,22};

    int n = sizeof(arr) / sizeof(arr[0]);

    bsort(n, arr);

    printf("Sorted array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}