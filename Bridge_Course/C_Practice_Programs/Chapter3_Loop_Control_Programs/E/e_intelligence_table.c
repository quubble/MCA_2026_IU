#include <stdio.h>
int main(){float x,y,i;for(y=1;y<=6;y++)for(x=5.5;x<=12.5;x+=0.5){i=2+(y+0.5*x);printf("y=%.0f x=%.1f i=%.2f\n",y,x,i);}return 0;}