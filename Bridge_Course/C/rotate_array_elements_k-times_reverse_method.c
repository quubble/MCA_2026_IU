//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

//Rotate Array - Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

//most optimized solution - reverse method  Reverse method	TC: O(n)	Sc: O(1)	Easy-Medium

#include <stdio.h>

//most optimized solution - reverse method

//function to reverse the array elements
void reverse(int* nums, int start, int end)
{
    while(start < end)
    {
        // swap nums[start] and nums[end]

        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        // move towards center
        start++;
        end--;
    }
}

//function to rotate
void rotate(int* nums, int numsSize, int k)
{
    // If k is greater than array size
    k = k % numsSize;

    // Step 1:
    // Reverse the complete array
    reverse(nums, 0, numsSize - 1);


    // Step 2:
    // Reverse first k elements
    reverse(nums, 0, k - 1);


    // Step 3:
    // Reverse remaining elements
    reverse(nums, k, numsSize - 1);
}


int main()
{
    int nums[] = {1,2,3,4,5,6,7};

    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int k = 3;


    rotate(nums, numsSize, k);


    printf("Rotated array: ");

    for(int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }


    return 0;
}
