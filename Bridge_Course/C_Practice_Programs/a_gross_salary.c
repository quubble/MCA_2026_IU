#include <stdio.h>
int main() {
    float basic, da, hra, gross;
    printf("Enter basic salary: ");
    scanf("%f",&basic);
    da=0.40f*basic; hra=0.20f*basic;
    gross=basic+da+hra;
    printf("Gross salary = %.2f\n",gross);
    return 0;
}