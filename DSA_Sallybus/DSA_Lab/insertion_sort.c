/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 6;
    int temp=0;
    int i=0;
    int j=0;
    
    int arr[]= {6,5,11,2,7,3};
    
    for(i=1; i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0 && arr[j]>temp;j--)
        {
            arr[j+1] = arr[j];
            
        }
        arr[j+1] = temp;
    }
    printf("sorted array: ");
    for(i=0;i<n;i++){
    printf("%d ", arr[i]);
    }

    return 0;
}