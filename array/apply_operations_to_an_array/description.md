# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2460

## Problem
You are given a 0-indexed array `nums` of size `n` consisting of non-negative integers.

You need to apply `n - 1` operations to this array where, in the `ith` operation (0-indexed), you will apply the following on the `ith` element of `nums`:
- If `nums[i] == nums[i + 1]`, then multiply `nums[i]` by `2` and set `nums[i + 1]` to `0`. Otherwise, you skip this operation.

After performing all operations, shift all the `0`'s to the end of the array.
- For example, the array `[1, 0, 2, 0, 0, 1]` after shifting all its `0`'s to the end, is `[1, 2, 1, 0, 0, 0]`.

Return the resulting array.

Note that the operations are applied sequentially, not all at once.

## Example
```
Input: nums = [1, 2, 2, 1, 1, 0]
Output: [1, 4, 2, 0, 0, 0]
```

## Key Idea
Simply loop and update. Then construct a new array, skip over all `0` and append them at the end.

## Solution
- [Python](./solution.py)