## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2369

## Problem
You are given a 0-indexed integer array `nums`. You have to partition the array into one or more contiguous subarrays.

We call a partition of the array valid if each of the obtained subarrays satisfies one of the following conditions:
1. The subarray consists of exactly `2` equal elements, i.e. `[2, 2]`
2. The subarray consists of exactly `3` equal elements, i.e. `[4, 4, 4]`
3. The subarray consists of exactly `3` consecutive increasing elements, i.e. `[3, 4, 5]`

Return `true` if the array has at least one valid partition. Otherwise, return `false`.

## Example
```
Input: nums = [4, 4, 4, 5, 6]
Output: true
Explanation: The array can be partitioned into the subarray [4, 4] and [4, 5, 6]

Input: nums = [1, 1, 1, 2]
Output: false
```

## Key Idea
Since we can break this problem into subproblems, it is obvious to use dynamic programming to solve this problem. Let `dp[i]` be `true` if we can partition the first `i` elements in the given array. Thus we have the following cases:
- `dp[0] = true`
- `dp[1] = false`
- `dp[2] = true if nums[0] == nums[1]`
- `dp[i + 1] = true if`
  - `nums[i - 1] == nums[i] && dp[i - 1]` or
  - `nums[i - 2] == nums[i] && nums[i - 1] == nums[i] && dp[i - 2]` or
  - `nums[i - 2] + 1 == nums[i - 1] && nums[i - 1] + 1 == nums[i] && dp[i - 2]`

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
