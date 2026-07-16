#include <stdio.h>

int main()
{
    // Variable declarations
    int choice;
    int num1, num2;

    // Read two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Display the menu
    printf("\n===== CALCULATOR MENU =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    // Read the user's choice
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Perform the selected operation
    switch(choice)
    {
        case 1:
            printf("Addition = %d", num1 + num2);
            break;

        case 2:
            printf("Subtraction = %d", num1 - num2);
            break;

        case 3:
            printf("Multiplication = %d", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Division = %.2f", (float)num1 / num2);
            else
                printf("Division by zero is not possible.");
            break;

        case 5:
            if(num2 != 0)
                printf("Modulus = %d", num1 % num2);
            else
                printf("Modulus by zero is not possible.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
