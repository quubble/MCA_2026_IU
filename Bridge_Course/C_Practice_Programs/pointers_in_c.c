//Pointers in C

#include<stdio.h>

int main(){
  //variable declared
  int a = 10;
  char c = 'X';
  float f = 200.00;

  //variable pointers declared
  int *p = &a;
  char *q = &c;
  float *r = &f;
  
//printing the values via pointers
  printf("\nValue of a is: %d ", *p);
  printf("\nValue of c is: %c ", *q);
  printf("\nValue of f is: %.2f ", *r);
  
  return 0;
}
