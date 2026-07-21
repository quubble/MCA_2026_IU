/* Problem: https://leetcode.com/problems/two-sum/description/?envType=problem-list-v2&envId=array */


/*Brute force approach for solving a Two Sum Array Problem in C, [Easy]*/

#include <stdio.h>
#include <stdlib.h>

/**
 * Note:
 * The returned array must be malloced.
 * Caller is responsible for calling free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    // We know the answer will contain exactly 2 indices.
    *returnSize = 2;

    // Allocate memory for the result array.
    int *answer = (int*)malloc(2 * sizeof(int));

    // Go through every number one by one.
    for (int i = 0; i < numsSize - 1; i++)
    {
        // Compare nums[i] with every number after it.
        for (int j = i + 1; j < numsSize; j++)
        {
            // Check if their sum equals the target.
            if (nums[i] + nums[j] == target)
            {
                // Store the indices.
                answer[0] = i;
                answer[1] = j;

                // Return the result immediately.
                return answer;
            }
        }
    }

    // Safety return (problem guarantees a solution exists)
    return answer;
}

int main()
{
    // Input array
    int nums[] = {2, 7, 11, 15};

    // Find the number of elements in the array
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    // Variable to store user-entered target
    int target;

    // Variable to store the size of the returned array
    int returnSize;

    // Ask the user to enter the target
    printf("Enter the target value: ");
    scanf("%d", &target);

    // Call the twoSum function
    int *result = twoSum(nums, numsSize, target, &returnSize);

    // Print the target entered
    printf("\nTarget = %d\n", target);

    // Print the indices
    printf("Indices = [");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d", result[i]);

        if (i < returnSize - 1)
            printf(", ");
    }
    printf("]\n");

    // Free the allocated memory
    free(result);

    return 0;
}
