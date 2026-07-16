#include <stdio.h>

int main()
{
    // Variable declaration
    float percentage;

    // Read the percentage from the user
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    // Check for valid percentage
    if(percentage < 0 || percentage > 100)
    {
        printf("Invalid percentage!");
    }
    // Display grade based on percentage
    else if(percentage >= 90)
    {
        printf("Grade: A+");
    }
    else if(percentage >= 80)
    {
        printf("Grade: A");
    }
    else if(percentage >= 70)
    {
        printf("Grade: B");
    }
    else if(percentage >= 60)
    {
        printf("Grade: C");
    }
    else if(percentage >= 50)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: Fail");
    }

    return 0;
}
