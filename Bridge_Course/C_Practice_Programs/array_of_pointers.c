// concept displayed - Pointers and Array of Pointers

#include<stdio.h>

int main(){
  //variable declared
  int a = 10;
  char c = 'X';
  float f = 200.000000000000;

  //variable pointers declared
  int *p = &a;
  char *q = &c;
  float *r = &f;
  
//printing the values via pointers
  //printf("\nValue of a via pointer is: %d ", *p);
  //printf("\nValue of c via pointer is: %c ", *q);
  //printf("\nValue of f via pointer is: %.2f \n", *r);
  
  //learn arrays of pointers
  
  void *z[3];

    z[0] = &a;
    z[1] = &c;
    z[2] = &f;

//type casting while printing
    printf("%d\n", *(int *)z[0]);
    printf("%c\n", *(char *)z[1]);
    printf("%.2f\n", *(float *)z[2]);

  
  return 0;
}
