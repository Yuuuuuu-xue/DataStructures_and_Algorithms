# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2540

## Problem
Given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst `nums1` and `nums2`, return `-1`.

Note that an integer is said to be common to `nums1` and `nums2` if both arrays haver at least one occurrence of that integer.

## Example:
```
Input: nums1 = [1, 2, 3], nums2 = [2, 4]
Output: 2
```

## Key Idea
Simply use two pointers and if they are the same, then return it, otherwise increment the smallest number index. 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)