#include <stdio.h>
int main(){int age;char sex,res,health;float amt;
printf("Age: ");scanf("%d",&age);
printf("Sex (M/F): ");scanf(" %c",&sex);
printf("City or Village (C/V): ");scanf(" %c",&res);
printf("Health (E=Excellent,P=Poor): ");scanf(" %c",&health);
if(health=='E'&&age>=25&&age<=35&&(res=='C'||res=='c')&&(sex=='M'||sex=='m'))
printf("Insured\nPremium: Rs.4/thousand\nMax Policy: Rs.200000\n");
else if(health=='E'&&age>=25&&age<=35&&(res=='C'||res=='c')&&(sex=='F'||sex=='f'))
printf("Insured\nPremium: Rs.3/thousand\nMax Policy: Rs.100000\n");
else if(health=='P'&&age>=25&&age<=35&&(res=='V'||res=='v')&&(sex=='M'||sex=='m'))
printf("Insured\nPremium: Rs.6/thousand\nMax Policy: Rs.10000\n");
else printf("Person is not insured.\n");
return 0;}