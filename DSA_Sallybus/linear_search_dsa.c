/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// DSA - linear search without using function

#include <stdio.h>

int main()
{
    int key = 0;
    int s = 0;
    int found = 0;
    
    //accepting values from the user
    printf("Enter size: ");
    scanf("%d", &s);
    
    int arr[s];
    
    printf("Enter key: ");
    scanf("%d", &key);
    
    printf("Enter array elements: ");
    for(int i = 0; i<s; i++)
    {
    scanf("%d", &arr[i]);
    
    
        if(arr[i]==key){
            printf("Element found at position %d ", i+1);
            found =1;
            break;
            }
        
        
    }
        if(found ==0){
            printf("Element not found");
        }
    
    

    return 0;
}