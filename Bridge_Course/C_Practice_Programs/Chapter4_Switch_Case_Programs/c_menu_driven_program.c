/* Program (C): Menu Driven Program */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, num, i;
    long long factorial;
    int prime;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Factorial\n2. Prime or Not\n3. Odd or Even\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                factorial = 1;
                for (i = 1; i <= num; i++) factorial *= i;
                printf("Factorial = %lld\n", factorial);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                prime = (num > 1);
                for (i = 2; i <= num / 2 && prime; i++)
                    if (num % i == 0) prime = 0;
                if (prime)
                    printf("%d is a Prime Number\n", num);
                else
                    printf("%d is Not a Prime Number\n", num);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num % 2 == 0)
                    printf("%d is Even\n", num);
                else
                    printf("%d is Odd\n", num);
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
