#include <stdio.h>

int main()
{
    int num, reverse = 0, remainder;

//take user input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\norignal number = %d\n", num);

//logic for reversing the number
    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}
