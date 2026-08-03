//dsa_linear_search_program - size of array is taken from user.c

#include <stdio.h>

int main()
{
    int N, i, key;

    printf("Enter length of array: ");  //array length by user
    scanf("%d", &N);

    int Arr[N];  //array declared

    for(i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }

  //array element to search as key  
  printf("Enter element to search: ");
    scanf("%d", &key);

  //logic to find array element at nth index  
  for(i = 0; i < N; i++)
    {
        if(Arr[i] == key)
        {
            printf("Element found at index %d", i);
            return 0;
        }
    }

    printf("Element Not Found");

    return 0;
}
