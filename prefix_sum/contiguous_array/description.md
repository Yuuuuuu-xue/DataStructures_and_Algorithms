# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 525

## Problem
Given a binary array `nums`, return the maximum, length of a contiguous subarray with an equal number of `0` and `1`. 

## Example:
```
Input: nums = [0, 1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

Input: nums = [0, 1, 0]
Output: 2
Explanation: [0, 1] or [1, 0] is a longest contiguous subarray with equal number of 0 and 1.
```

## Key Idea
We will use a prefix sum to solve this problem. Let `currSum` be the sum such that we add `1` if `nums[i]` is 1 else decrement by 1. Let `m` be a map that maps `currSum` to index `i`. Then if `currSum == 0`, then this means we already have an equal number of 0 and 1 from 0 to `i`.

If not, then we check if `currSum` exists in the map, `m[currMap]` to `i` is the subarray contains equal number of 0 and 1.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)