#include <stdio.h>

int main()
{
    int num, i;
    long long factorial = 1;

  //take user input
    printf("Enter a number: ");
    scanf("%d", &num);

  //logic to find factorial
    if(num < 0)
    {
        printf("Factorial of a negative number does not exist.");
    }
    else
    {
        for(i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %lld", num, factorial);
    }

    return 0;
}
