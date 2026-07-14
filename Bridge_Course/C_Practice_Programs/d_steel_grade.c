#include <stdio.h>
int main(){float h,c,t;int g;
printf("Enter hardness, carbon content, tensile strength: ");
scanf("%f%f%f",&h,&c,&t);
int a=h>50,b=c<0.7,c3=t>5600;
if(a&&b&&c3)g=10; else if(a&&b)g=9; else if(b&&c3)g=8;
else if(a&&c3)g=7; else if(a||b||c3)g=6; else g=5;
printf("Grade = %d\n",g);return 0;}