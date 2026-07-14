/* Program (D): Grace Marks Using Switch */
#include <stdio.h>

int main() {
    int classObtained, failedSubjects, grace = 0;

    printf("Enter class obtained (1/2/3): ");
    scanf("%d", &classObtained);

    printf("Enter number of failed subjects: ");
    scanf("%d", &failedSubjects);

    switch (classObtained) {
        case 1:
            if (failedSubjects <= 3)
                grace = failedSubjects * 5;
            break;

        case 2:
            if (failedSubjects <= 2)
                grace = failedSubjects * 4;
            break;

        case 3:
            if (failedSubjects == 1)
                grace = 5;
            break;

        default:
            printf("Invalid Class!\n");
            return 0;
    }

    printf("Grace Marks = %d\n", grace);
    return 0;
}
