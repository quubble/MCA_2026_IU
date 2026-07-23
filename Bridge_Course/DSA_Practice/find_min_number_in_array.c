//find_min_number_in_array

#include<stdio.h>

int main(){
  int arr[] = {23, 12, 450, 3, 63, 14};

  //finding the array size
  int n = sizeof(arr) / sizeof(arr[0]);

  int min = arr[0];
  
  for(int i=0; i<= n-1; i++){
    
    if(arr[i] < min){
      min = arr[i];
    }
  }
  printf("Minimum number is %d\n", min);
  return 0;
}
