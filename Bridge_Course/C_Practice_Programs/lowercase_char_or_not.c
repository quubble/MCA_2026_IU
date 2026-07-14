//Check whether a character is a lowercase alphabet

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    (ch >= 'a' && ch <= 'z') ?
        printf("Lowercase alphabet\n") :
        printf("Not a lowercase alphabet\n");

    return 0;
}

/* Sample Output:
Enter a character: g
Lowercase alphabet
*/
