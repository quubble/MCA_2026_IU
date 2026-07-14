#include <stdio.h>
int main(){int n;for(n=1;n<=500;n++){int t=n,s=0,d;while(t){d=t%10;s+=d*d*d;t/=10;}if(s==n)printf("%d\n",n);}return 0;}