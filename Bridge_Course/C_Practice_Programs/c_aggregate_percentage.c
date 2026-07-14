#include <stdio.h>
int main() {
    int m1,m2,m3,m4,m5,agg; float per;
    printf("Enter marks in 5 subjects: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    agg=m1+m2+m3+m4+m5;
    per=agg/5.0f;
    printf("Aggregate = %d\nPercentage = %.2f%%\n",agg,per);
    return 0;
}