## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3356

## Problem
You are given an integer array `nums` of length `n` and a 2D array `queries` where `queries[i] = [l_i, r_i, val_i]`

Each `queries[i]` represents the following action on `nums`:
- Decrement the value at each index in the range `[l_i, r_i]` in `nums` by at most `val_i`
- The amount by which each value is decremented can be chosen independently for each index

A zero array is an array with all its elements equal to 0

Return the minimum possible non-negative value of `k`, such that after processing the first `k` queries in sequence, `nums` becomes a zero array. If no such `k` exists, return -1.

## Example
```
Input: nums = [2, 0, 2], queries = [[0, 2, 1], [0, 2, 1], [1, 1, 3]]
Output: 2
```

## Key Idea
A simple greedy strategy is to apply `val_i` for all elements until they reach to zero.

If we simulate the problem, then we basically try query from `0` to `k` until all elements reach to `0`. However, in this case, the worst time complexity will be O(n * m * z) where `z` is the range between `j - i`.

However, if we know at index `0 <= k < m` works, then `k + 1` to `m - 1` all work. This means we can solve this problem via binary search. This simplies the problem, given an index `k`, can we reduce to a zero array after `k` operations?

The solve this sub-problem optimally, we can loop over the query `(i, j, val)` and we can add `val` to new_nums[i] and subtract it from new_nums[j + 1]. Then if sum of all values up to new_nums[i] < nums[i], it means we cannot use `k` queries to reduce `nums[i]` to 0. We need to subtract it from new_nums[j + 1] because we can apply in between nums[i] and nums[j]. That's why we need to sum all values `nums[0]` to `new_nums[i]` and compare it with `nums[i]`. 

## Complexity Analysis
- Runtime Complexity: O(n * lg m)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)