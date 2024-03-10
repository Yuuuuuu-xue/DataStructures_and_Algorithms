## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 349

## Problem
Given two integer arrays `nums1` and `nums2`, return an array fo their intersection. Each element in the result must be unique and you may return the result in any order.

## Example
```
Input: nums1 = [1, 2, 2, 1], nums2 = [2, 2]
Output: [2]

Input: nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
Output: [9, 4]
```

## Key Idea
Use a hash set as the output, loop over one element, check if that element is in another element, if so, then add to output set.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
