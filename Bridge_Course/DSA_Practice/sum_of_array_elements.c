//find_sum_od_elements_in_array

#include<stdio.h>

int main(){
  int arr[] = {23, 12, 450, 3, 63, 14};

  //finding the array size
  int n = sizeof(arr) / sizeof(arr[0]);

  int sum =0;
  
  for(int i=0; i<= n-1; i++){
        sum +=arr[i];
    
  }
  printf("The sum of array elements is %d\n", sum);
  return 0;
}
