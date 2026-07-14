#include <stdio.h>
int main(){int stock,order,credit;
printf("Enter stock, order and credit status (1=OK,0=Not OK): ");
scanf("%d%d%d",&stock,&order,&credit);
if(!credit) printf("Do not supply. Send intimation.\n");
else if(order<=stock) printf("Supply full order.\n");
else printf("Supply %d items. Balance will be shipped later.\n",stock);
return 0;}