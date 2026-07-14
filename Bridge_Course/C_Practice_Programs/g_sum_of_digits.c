#include <stdio.h>
int main(){int n,sum=0;printf("Enter a five-digit number: ");scanf("%d",&n);while(n){sum+=n%10;n/=10;}printf("Sum of digits = %d\n",sum);return 0;}