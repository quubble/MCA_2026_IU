// Question: https://leetcode.com/problems/single-number/description
// Topic: Arrays


//optimized solution for interview
/* time and space complexity - the XOR solution is both simple and optimal, 
running in O(n) time while using only O(1) extra space. */


#include <stdio.h>
// Function to find the single number
int singleNumber(int* nums, int numsSize)
{
    // Initialize result to 0
    int result = 0;

    // XOR every element in the array
    for(int i = 0; i < numsSize; i++)
    {
        result = result ^ nums[i];
    }

    // The remaining value is the unique number
    return result;
}

int main()
{
    // Example input
    int nums[] = {4, 1, 2, 1, 2};

    // Calculate the number of elements in the array
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    // Call the function
    int answer = singleNumber(nums, numsSize);

    // Display the result
    printf("The single number is: %d\n", answer);

    return 0;
}
