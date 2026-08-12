
//program to find min max elements in an array using functions

#include <stdio.h>

//function to find minimum array elements
int findmin(int n, int arr[]){
    int min = 0;
    
    for(int i=0;i<n;i++){
        if(arr[min] > arr[i]){
            min = i;
        }
    }
    return min;
}

//function to find maximum array elements
int findmax(int n, int arr[]){
    int max = 0;
    
    for(int i=0;i<n;i++){
        if(arr[max] < arr[i]){
            max = i;
        }
    }
    return max;
}


int main()
{

int n = 6;
int arr[] = {1290, 8, 4500, 90000000, 1600, 54};

int min = findmin(n, arr);
printf("Minimum element = %d, index = %d, position = %d\n", arr[min], min, min + 1);

int max = findmax(n, arr);
printf("\nMaximum element = %d, index = %d, position = %d\n", arr[max], max, max + 1);

return 0;
}
