/*Given an array nums of integers, return how many of them contain an even number of digits.
Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

Example 2:

Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
*/
#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    // Handle negative numbers by taking the absolute value
    num = abs(num);
    if (num == 0) return 1;
    return (int)log10(num) + 1;
}

// Function to find how many numbers have an even number of digits
int findEvenDigitNumbers(int nums[], int size) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (countDigits(nums[i]) % 2 == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int nums[] = {12, 345, 2, 6, 7896};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int result = findEvenDigitNumbers(nums, size);
    
    printf("Number of elements with even number of digits: %d\n", result);
    
    return 0;
}
