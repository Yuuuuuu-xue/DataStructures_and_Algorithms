# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 3375

## Problem
You are given an integer array `nums` and an integer `k`.

An integer `h` is called valid if all values in the array that are strictly greater than `h` are identical.

For example, if `nums = [10, 8, 10, 8]`, a valid integer `h = 9` because all `nums[i] > 9` are equal to 10, but 5 is not a valid integer.

You are allowed to perform the following operation on `nums`:
- Select an integer `h` that is valid for the current values in `nums`.
- For each index `i` where `nums[i] > h`, set `nums[i]` to `h`.

Return the minimum number of operations required to make every element in `nums` equal to `k`. If it is impossible to ake all elements equal to `k`, return `-1`.

## Example
```
Input: nums = [5, 2, 5, 4, 5], k = 2
Output: 2
```

## Key Idea
If any number less than to `k`, we return -1.

Then return the number of distinct elements > k.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)