## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 930

## Problem
Given a binary `nums` and an integer `goal`, return the number of non-empty subarrays with a sum `goal`.

A subarray is a contiguous part of the array.

## Example
```
Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: The 4 subarrays are bolded and underlined below:
[**1,0,1**,0,1]
[**1,0,1,0,**1]
[1,**0,1,0**,1]
[1,0,**1,0,1**]
```

## Key Idea
Let `currSum` be the current sum from `0` to `i`. Then let `m` be a map that maps some prefix sum to number of occurrences. Then for each time, we add `m[currSum - goal]` and update `m[currSum]`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
