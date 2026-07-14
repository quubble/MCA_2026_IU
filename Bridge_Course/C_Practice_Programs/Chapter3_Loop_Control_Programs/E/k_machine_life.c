#include <stdio.h>
int main(){float cost=6000,sal=2000,earn=1000,r=0.12,bal=cost;int y=0;while(1){y++;bal=bal*(1+r)-earn;if(bal<=sal)break;}printf("Minimum life=%d years\n",y);return 0;}