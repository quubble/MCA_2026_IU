/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

//function for selection sort
void selectionsort(int n, int arr[]){
    int i =0; 
    int j= 0; 
    int min = 0;
    
    for(i=0; i<n-1;i++){
        min =i;
        
        for(j=i+1;j<n;j++){
            if(arr[j] > arr[min]){
                min =j;
            }
        }
        
        if(min!= i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] =temp;
        } 
    }
    
}

int main()
{
    int i, n = 0;
    
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    
    
    selectionsort(n, arr);
    
    
    
    printf("Sorted array after Selection sort  is: ");
    
    for(i = 0; i<n;i++){
       printf("%d ", arr[i]); 
    }
    printf("\n");

    

    return 0;
}