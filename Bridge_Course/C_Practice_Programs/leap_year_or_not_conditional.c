//Check whether a year is a leap year using the conditional operator

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) ?
        printf("%d is a Leap Year\n", year) :
        printf("%d is Not a Leap Year\n", year);

    return 0;
}

/* Sample Output:
Enter a year: 2024
2024 is a Leap Year
*/
