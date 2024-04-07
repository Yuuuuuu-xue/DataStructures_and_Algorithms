## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 77

## Problem
Given two integers `n` and `k`, return all possible combinations of `k` numbers chosen from the range `[1, n]`

You may return the answer in any order.

## Example:
```
Input: n = 4, k = 2
Output: [[1, 2], [1, 3], [1, 4], [2, 3], [2, 4], [3, 4]]

Input: n = 1, k = 1
Output: [[1]]
```

## Key Idea
We will try to solve this problem with a recursion that takes in
- `curr`: the current combination list
- `i`: the current number
- `s`: the current number left, if `s == 0`, then we can push `curr` to the output array

For each conbination, we will try to push `i <= x <= n` to the `curr` and recursively find the solution.

When we push `x` to `curr`, after recursive call, we will backtrack and pop `x` from `curr` and try the next number.

## Solution
- [C++](solution.cpp)