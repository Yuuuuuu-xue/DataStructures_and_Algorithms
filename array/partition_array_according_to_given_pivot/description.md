# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2161

## Problem
You are given a 0-indexed integer array `nums` and an integer `pivot`. Rearrance `nums` such that the following conditions are satisfied:
- Every element less than `pivot` appears before every element greater than `pivot`
- Every element equal to `pivot` appears in between the elements less than and greater than `pivot`
- The relative order of the elements less than `pivot` and the elements greater than `pivot` is maintained
  - More formally, consider every `p_i`, `p_j` where `p_i` is the new position of the `ith` element and `p_j` is the new position of the `jth` element. If `i < j` and both elements are smaller (or larger) than `pivot`, then `p_i < p_j`

Return `nums` after the rearrangement.

## Examples:
```
Input: nums = [9, 12, 5, 10, 14, 3, 10], pivot = 10
Output: [9, 5, 3, 10, 10, 12, 14]
```

## Key Idea
Simply use two arrays to track elements less than and larger than pivot. Also use a counter to track the number of elements equal to pivot. Construct the array at the end.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
