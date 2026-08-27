/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void lsearch(int n, int key, int arr[]){
    for(int i =0; i<n; i++){
        if(arr[i]==key){
            printf("key found at position %d ", i+1);
            return;
            
        }
    }
    printf("key not found");
}


int main()
{
    int arr[] ={12,23,45,32,8,33,89,54,66,22};
    int key;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Enter key element to search: ");
    scanf("%d", &key);
    
    lsearch(n, key, arr);
    
    return 0;
}
