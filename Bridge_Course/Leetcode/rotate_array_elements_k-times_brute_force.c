//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/
// rotate_array_elements_k-times_brute_force method
//TC:O(n × k)	, SC:O(1)

#include <stdio.h>

void rotate(int* nums, int numsSize, int k)
{
    // If k is greater than array size
    k = k % numsSize;

    for(int step = 0; step < k; step++)
    {
        // Store last element
        int last = nums[numsSize - 1];

        // Shift all elements one position right
        for(int i = numsSize - 1; i > 0; i--)
        {
            nums[i] = nums[i - 1];
        }

        // Put last element at first position
        nums[0] = last;
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7};

    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int k = 3;

    rotate(nums, numsSize, k);

    for(int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
