#include <stdio.h>
int main(){int i,j,p;for(i=2;i<=300;i++){p=1;for(j=2;j*j<=i;j++)if(i%j==0){p=0;break;}if(p)printf("%d ",i);}return 0;}