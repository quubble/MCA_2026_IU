#include <stdio.h>
int main(){float a,b,c;printf("Enter three sides: ");scanf("%f%f%f",&a,&b,&c);
if(a+b<=c||a+c<=b||b+c<=a){printf("Invalid Triangle\n");return 0;}
if(a==b&&b==c) printf("Equilateral Triangle\n");
else if(a==b||b==c||a==c) printf("Isosceles Triangle\n");
else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) printf("Right Angled Triangle\n");
else printf("Scalene Triangle\n"); return 0;}