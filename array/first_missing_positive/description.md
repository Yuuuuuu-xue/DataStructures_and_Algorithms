# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 41

## Problem
Given an unsorted integer array `nums`. Return the smallest positive integer that is not present in `nums`.

You must implement an algorithm that runs in `O(n)` time and uses `O(1)` space.

## Example
```
Input: nums = [1, 2, 0]
Output: 3
Explanation: The number in the range [1, 2] are all in the array.
```

## Key Idea
Note, all the non-positive numbers (negative values or zero) and values greater than `n` can be ignored and thus this gives us a hint that we can modify the input arrays to somehow memories what values we have seen before.

First of all, loop over all the input numbers and make non-valid values to `1`, all the non-positve numbers and values greater than `n` and also need to check if we have seen a value `1` or not since we are overriding those values to `1`.

If we have not seen `1` before, then we can return `1` immediately.

Otherwise, we can loop over all the numbers `x`, set `nums[x - 1]` to negative if we have seen it. At the end, simply loop over all the indexes and again and if current index is postive, we return `i + 1`.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.py)
