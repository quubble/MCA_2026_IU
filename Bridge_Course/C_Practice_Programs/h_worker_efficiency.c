#include <stdio.h>
int main(){float t;printf("Enter time taken (hours): ");scanf("%f",&t);
if(t>=2&&t<3) printf("Highly Efficient\n");
else if(t>=3&&t<4) printf("Improve Speed\n");
else if(t>=4&&t<=5) printf("Training Required\n");
else if(t>5) printf("Leave the Company\n");
else printf("Invalid Input\n"); return 0;}