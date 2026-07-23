//find_average_of_elements_in_array

#include<stdio.h>

int main(){
  int arr[] = {23, 12, 450, 3, 63, 14};

  //finding the array size
  int n = sizeof(arr) / sizeof(arr[0]);

  int sum =0;
  int avg;
  
  for(int i=0; i<= n-1; i++){
        sum +=arr[i];
        avg = sum / n;
    
  }
  printf("The average of array elements is %d\n", avg);
  return 0;
}
