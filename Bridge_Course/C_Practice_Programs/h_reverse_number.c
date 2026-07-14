#include <stdio.h>
int main(){int n,r=0;printf("Enter a five-digit number: ");scanf("%d",&n);while(n){r=r*10+n%10;n/=10;}printf("Reversed number = %d\n",r);return 0;}