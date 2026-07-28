//https://leetcode.com/problems/concatenation-of-array



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for a new array of size 2 * numsSize
    int* ans = (int*)malloc(sizeof(int) * 2 * numsSize);

    // Loop through each element of the original array
    for (int i = 0; i < numsSize; i++) {
        // Copy nums[i] into the first half of ans
        ans[i] = nums[i];

        // Copy nums[i] into the second half of ans
        ans[i + numsSize] = nums[i];
    }

    // Set the size of the returned array
    *returnSize = 2 * numsSize;

    // Return the newly created array
    return ans;
}


//Complexity
//Time complexity: O(n) because we visit each element once.

//Space complexity: O(n) because we create a new array.
