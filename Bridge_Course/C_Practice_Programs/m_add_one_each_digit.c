#include <stdio.h>
int main(){int n,d,res=0,p=1;printf("Enter a five-digit number: ");scanf("%d",&n);while(n){d=(n%10+1)%10;res+=d*p;p*=10;n/=10;}printf("New number = %d\n",res);return 0;}