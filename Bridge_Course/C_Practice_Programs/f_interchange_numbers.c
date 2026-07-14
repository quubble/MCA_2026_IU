#include <stdio.h>
int main(){int c,d,t;printf("Enter C and D: ");scanf("%d%d",&c,&d);t=c;c=d;d=t;printf("C = %d\nD = %d\n",c,d);return 0;}