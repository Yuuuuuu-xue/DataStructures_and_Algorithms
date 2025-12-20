# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium

## Problem
Given an integer array `nums` of length `n` and an integer `target`, find three integers in `nums` such that the sum is closest to `target`.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

## Example:
```
Input: nums = [-1, 2, 1, -4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
```

## Key Idea
For this question, we will fix one number, then have two pointers point at the smallest and largest value. This requires the list needs to be sorted. Then we get a 3 sum. If this value equal to the target, then we can return it.

If not, then if this value is smaller than the target, we can move the smallest to the next pointer to try with some other big value and store the potential solution.

Similarly, if this value is larger than the target, we can move the largest value to a smaller value.

## Complexity Analysis
- Runtime Complexity:
  - O(n lg n) for sorting
  - O(n) to fix the value and then O(n) to loop over smallest and largest pointer. Hence O(n^2)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
