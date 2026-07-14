#include <stdio.h>
int main(){int i,h;float pay;for(i=1;i<=10;i++){printf("Hours for employee %d: ",i);scanf("%d",&h);pay=(h>40)?(h-40)*12:0;printf("Overtime Pay = Rs. %.2f\n",pay);}return 0;}