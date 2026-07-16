//menu_based_arthematic_operations.c

#include <stdio.h>

int main()
{
    int choice;
    int a, b;

  // take user input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

  //Menu design
    printf("\n----- MENU -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
//use of switch case for menu driven logic
    switch(choice)
    {
        case 1:
            printf("Addition = %d", a + b);
            break;

        case 2:
            printf("Subtraction = %d", a - b);
            break;

        case 3:
            printf("Multiplication = %d", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Division = %.2f", (float)a / b);
            else
                printf("Division by zero is not possible.");
            break;

        case 5:
            if(b != 0)
                printf("Modulus = %d", a % b);
            else
                printf("Modulus by zero is not possible.");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
