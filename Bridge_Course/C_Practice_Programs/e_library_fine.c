#include <stdio.h>
int main(){int d;printf("Days late: ");scanf("%d",&d);
if(d<=5) printf("Fine = Rs. %.2f\n",d*0.50);
else if(d<=10) printf("Fine = Rs. %d\n",d);
else if(d<=30) printf("Fine = Rs. %d\n",d*5);
else printf("Membership Cancelled\n"); return 0;}