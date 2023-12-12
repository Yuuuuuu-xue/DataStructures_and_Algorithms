# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1464

## Problem
Given the array of integers `nums`, you will choose two different indices `i` and `j` of that array. Return the maximum value of `(nums[i] - 1) * (nums[j] - 1)`

Assume all numbers are `>= 1`

## Example
```
Input: nums = [3, 4, 5, 2]
Output: 12
Explanatiopn: choose index 1 and 2, then product = (4 - 1) * (5 - 1) = 3 * 4 = 12
```

## Key Idea
Simply find the largest and second largest element.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)