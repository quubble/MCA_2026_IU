#include <stdio.h>
#include <math.h>
int main(){double p,r,n,q,a;int i;for(i=1;i<=10;i++){printf("Enter p r n q: ");if(scanf("%lf%lf%lf%lf",&p,&r,&n,&q)!=4)break;a=p*pow(1+r/(100*q),n*q);printf("Amount=%.2f\n",a);}return 0;}