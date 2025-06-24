# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2200

## Problem
You are given a 0-indexed integer array `nums` and two integers `key` and `k`. A k-distant index is an index `i` of `nums` for which there exists at least one index `j` such that `|i - j| <= k` and `nums[j] == key`

Return a list of all k-distant indices sorted in increasing order.

## Example:
```
Input: nums = [3, 4, 9, 1, 3, 9, 5], key = 9, k = 1
Output: [1, 2, 3, 4, 5, 6]
Explanation: Here, nums[2] == key and nums[5] == key
- For index 0, |0 - 2| > k and thus 0 is not a k-distant index
- For indices 1 to 6 are
```

## Key Idea
We can let `curr` be the index of last index that has value equal to `key`. If `abs(i - curr) <= k`, we append `i`. If not, we keep increment curr. If we find the first curr > key and does not work, we skip current element

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)