/*
Given an integer array nums of size n, return the number with the value closest to 0 in nums. If there are multiple answers, return the number with the largest value.

Example 1:
Input: nums = [-4,-2,1,4,8]
Output: 1
Explanation:
The distance from -4 to 0 is |-4| = 4.
The distance from -2 to 0 is |-2| = 2.
The distance from 1 to 0 is |1| = 1.
The distance from 4 to 0 is |4| = 4.
The distance from 8 to 0 is |8| = 8.
Thus, the closest number to 0 in the array is 1.

Example 2:
Input: nums = [2,-1,1]
Output: 1
Explanation: 1 and -1 are both the closest numbers to 0, so 1 being larger is returned.
*/
#include <stdio.h>
#include <stdlib.h> // for abs() function

int findClosestNumber(int nums[], int n) {
    int closest = nums[0]; // initialize closest with the first element

    for (int i = 1; i < n; i++) {
        // Check if the current number is closer to 0 than the current closest
        if (abs(nums[i]) < abs(closest)) {
            closest = nums[i];
        }
        // If two numbers are equally close, choose the larger one
        else if (abs(nums[i]) == abs(closest) && nums[i] > closest) {
            closest = nums[i];
        }
    }

    return closest;
}
