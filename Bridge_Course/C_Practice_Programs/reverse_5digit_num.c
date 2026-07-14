// (E) Reverse a Five-Digit Number

#include <stdio.h>

int main() {
    int num, rev = 0, temp;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    printf("Reversed Number = %d\n", rev);

    if (num == rev)
        printf("Both are Equal");
    else
        printf("Not Equal");

    return 0;
}
