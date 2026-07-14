//  (D) find Day on 1st January

#include <stdio.h>

int main() {
    int year, i, days = 0;

    printf("Enter year: ");
    scanf("%d", &year);

    for (i = 1900; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            days += 366;
        else
            days += 365;
    }

    switch (days % 7) {
        case 0: printf("Monday"); break;
        case 1: printf("Tuesday"); break;
        case 2: printf("Wednesday"); break;
        case 3: printf("Thursday"); break;
        case 4: printf("Friday"); break;
        case 5: printf("Saturday"); break;
        case 6: printf("Sunday"); break;
    }

    return 0;
}
