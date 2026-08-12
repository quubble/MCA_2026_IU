/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//bubble sort for array



//function for bubble sort for ascending order of array elements

//[if(arr[j] < arr[j+1])] - condition for descending order of elements

#include <stdio.h>

void bubblesort(int n, int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-1-i);j++){
            if(arr[j] > arr[j+1]){  
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main()
{
    int n = 6;
    int arr[] ={23,12,45,16, 35,11};
    
    printf("array before sorting: ");
    for(int i =0; i<n;i++){
        printf("\n%d", arr[i]);
    }
    
    bubblesort(n,arr);
    
    printf("\n");
    printf("\narray after sorting: \n");
    for(int i =0; i<n;i++){
        printf("\n%d", arr[i]);
    }
    

    return 0;
}
