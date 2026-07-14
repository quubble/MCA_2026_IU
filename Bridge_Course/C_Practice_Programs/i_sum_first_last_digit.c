#include <stdio.h>
int main(){int n,f,l;printf("Enter a four-digit number: ");scanf("%d",&n);l=n%10;f=n;while(f>=10)f/=10;printf("Sum = %d\n",f+l);return 0;}