//dsa - linearsearch function

#include <stdio.h>

void linearsearch(int n, int arr[]){
  int i =0, key=5;
  
  for(i=0;i<n;i++){
      if(arr[i] == key){
          printf("key %d found at: %dth index at %dth position", arr[i],i, (i+1));
          return;
        }
    }
    printf("Key not found");
}


int main()
{
    int i =0;
    int arr[] ={12,2,4,3,5,76,809};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    linearsearch(n,arr);
    return 0;
}