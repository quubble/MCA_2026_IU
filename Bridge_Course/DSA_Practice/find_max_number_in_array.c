//find_max_number_in_array

#include<stdio.h>

int main(){
  int arr[] = {23, 12, 45, 38, 63, 14};

  int n = sizeof(arr) / sizeof(arr[0]);

  int max = arr[0];
  
  for(int i=0; i<= n-1; i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  printf("Maximum number is %d\n", max);
    return 0;
}
