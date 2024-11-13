## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2563

## Problem
Given a 0-indexed integer array `nums` of size `n` and two integers `lower` and `upper`, return the number of fair pairs.

A pair `(i, j)` is fair if:
- `0 <= i < j < n`, and
- `lower <= nums[i] + nums[j] <= upper`

## Examples:
```
Input: nums = [0, 1, 7, 4, 4, 5], lower = 3, upper = 6
Output: 6
Explanation: There are 6 fair pairs:
- (0, 3)
- (0, 4)
- (0, 5)
- (1, 3)
- (1, 4)
- (1, 5)
```

## Key Idea
First of all, we can simply sort the nums. Then we can simply find the number of pairs <= upper bound = x and number of pairs <= lower - 1 = y. Then x - y becomes any pairs <= upper and >= lower.

To find the number of pairs <= z, we can use a two pointer solutio. We loop over `i` from `0` to `n` and use a two pointer `j`, note, if `(i, j)` does not work, then `(k, j)` won't work for `k > i`.

## Complexity Analysis
- Runtime Complexity: O(n lg n + n + n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)