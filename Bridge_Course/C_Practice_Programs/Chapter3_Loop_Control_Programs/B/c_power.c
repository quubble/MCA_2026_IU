#include <stdio.h>
int main(){int a,b,i,res=1;printf("Enter base and exponent: ");scanf("%d%d",&a,&b);for(i=1;i<=b;i++)res*=a;printf("Result=%d\n",res);return 0;}