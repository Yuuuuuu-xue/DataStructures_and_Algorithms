# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2270

## Problem
You are given a 0-indexed integer array `nums` of length `n`.

`nums` contains a valid split at index `i` if the following are true:
- The sum of the first `i + 1` elements is greater than or equal to the sum of last `n - i - 1` elements.
- There is at least one element to the right of `i`. That is `0 <= i < n - 1`.

Return the number of valid splits in `nums`.

## Examples:
```
Input: nums = [10, 4, -8, 7]
Output: 2 
Explanation: there are three ways of splitting nums into two non-empty parts:
- Split nums at index 0, then first part is [10] with sum 10, second part is [4, -8, 7] with sum 3. Since 10 >= 3, thus i = 0 is a valid split.
- Split nums at index 1, then first part is [10, 4] with sum 14, second part is [-8, 7] with sum -1. Since 14 >= -1, thus i = 1 is a valid split.
- Split nums at index 2, then first part is [10, 4, -8] with sum 6, second part is [7] with sum 7. Since 6 < 7, thus i = 2 is not a valid split
- Split nums at index 3, then second part is empty thus we stop.
```

## Key Idea
We can simply find the sum of the array as right part. Then for each index, add it to left sum (initial value from 0) and subtract it from right sum (initial value of sum). If left sum >= right sum, then add 1.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
