## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1235

## Problem
We have `n` jobs, where every job is scheduled to be done from `startTime[i]` to `endTime[i]`, obtaining a profit of `profit[i]`.

You're given the `startTime`, `endTime` and `profit` arrays, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.

If you choose a job that ends at time `x`, you will be able to start another job that starts at time `x`.

## Example
```
Input: startTime = [1, 2, 3, 3], endTime = [3, 4, 5, 6], profit = [50, 10, 40, 70]
Output: 120
Explanation: The subset chosen is the first and foruth job with the time range [1, 3] and [3, 6], we get the profit of 120 = 50 + 70
```

## Key Idea
We will solve this problem via dynamic programming. We will sort the `endTime` from smallest time to largest time.

Let `dp[i]` be the maximum profit that we can get with `ith` job, for `0 <= i <= n`. Then given `i`, we can either:
- do nothing, thus `dp[i] = dp[i - 1]`
- take current job at index `i - 1` (`ith` job with earlest start time), then we simply need to find `dp[m]` where `m` is the index of latest endtime `<= i`. Since we sort the `endTime`, and thus we can use binary search to find this value. Then `dp[m] + profit[i - 1]`.

## Complexity Analysis
- Runtime Complexity: O(n * lg n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
