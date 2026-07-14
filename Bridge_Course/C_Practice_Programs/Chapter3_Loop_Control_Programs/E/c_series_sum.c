#include <stdio.h>
int main(){int i,j;float s=0,f;for(i=1;i<=7;i++){f=1;for(j=1;j<=i;j++)f*=j;s+=i/f;}printf("Sum=%f\n",s);return 0;}