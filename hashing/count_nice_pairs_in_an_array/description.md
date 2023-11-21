## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1814

## Problem
You are given an array `nums` that consists of non-negative integers. Let us define `rev(x)` as the reverse of the non-negative integer `x`. For example, `rev(123) = 321` and `rev(120) = 21`. A pair of indices `(i, j)` is nice if it satisfies all of the following conditions:
- `0 <= i < j < nums.length`
- `nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])`

Return the number of nice pairs of indices. Since that number can be too large, return it modulo `10 ** 9 + 7`

## Example
```
Input: nums = [42, 11, 1, 97]
Output: 2
Explanation:
The two pairs are:
- (0, 3): 42 + rev(97) = 42 + 79 = 121 and 97 + rev(42) = 97 + 24 = 121
- (1, 2): 11 + rev(1) = 11 + 1 = 12 and 1 + rev(11) = 1 + 11 = 12
```

## Key Idea
The key idea is that `nums[i] + rev(nums[j]) = nums[j] + rev(nums[i])` is same as `nums[i] - rev(nums[i]) = nums[j] - rev(nums[j])`.

Then we can simply use a map that maps `nums[i] - rev(nums[i])` in a map with frequency. Then suppose frequency is `x`, then we have `(x - 1)` pairs with `i = 0`, `(x - 2)` pairs with `i = 1`, ..., thus, the number of pairs = `0 + 1 + 2 + ... + x - 1 = x * (x - 1) / 2`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
