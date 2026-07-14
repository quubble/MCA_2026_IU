#include <stdio.h>
int main(){int n,a[20],i=0;printf("Enter decimal: ");scanf("%d",&n);while(n){a[i++]=n%8;n/=8;}printf("Octal=");while(i--)printf("%d",a[i]);printf("\n");return 0;}