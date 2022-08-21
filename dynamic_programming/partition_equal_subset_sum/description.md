## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 416

## Problem
Given a non-empty array `nums` containing only positive integers, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

## Example
```
Input: nums = [1, 5, 11, 5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11]

Input: nums = [1, 2, 3, 5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
```

## Key Idea
Notice, if the sum is odd, then it is impossible to parition the array into two subsets of the equal sum. Thus we can immediately return false. Otherwise, we can try to find an array of elements such that the sum is the total sum divided by 2. Then the rest of elements can be partition into another half.

Thus let `dp[i][j]` be true iff the sum of subset of `nums[:j + 1]` is exactly `i`. Then we know that the base case for `dp[0][j]` is alwayws `true` and `dp[sum / 2][n - 1]` will be the final solution.

For given any `i` and `j`, we have two situations:
- If `nums[j] > i`, then we cannot use `nums[j]` and thus `dp[i][j] = dp[i][j - 1]`.
- If `nums[j] <= i`, then we can either
  - Use `nums[j]`, then `dp[i][j] = dp[i - nums[j]][j - 1]`, or
  - Not use `nums[j]`, then `dp[i][j] = dp[i][j - 1]`

## Complexity Analysis
- Runtime Complexity: O(n * m) where n = nums.size() and m = sum(nums) / 2
- Space Complexity: O(n * m)

## Solution
- [C++](solution.cpp)