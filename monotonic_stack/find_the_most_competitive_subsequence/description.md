## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1673

## Problem
Given an integer array `nums` and a positive integer `k`, return the most competitive subsequence of `nums` of size `k`.

An array's subsequence is a resulting sequence obtained by erasing some (possibly zero) eleemnts from the array.

We define that a subsequence `a` is more competitive than a subsequence `b` (of the same length) if in the first position where `a` and `b` differ, subsequence `a` has a number less than the corresponding number in `b`. For example, `[1, 3, 4]` is more competitive than `[1, 3, 5]` because the first position they differ is at the final number, and `4` is less than `5`.

## Example
```
Input: nums = [3, 5, 2, 6], k = 2
Output: [2, 6]

Input: nums = [2, 4, 3, 3, 5, 4, 9, 6], k = 4
Output: [2, 3, 3, 4]
```

## Key Idea
The problem here basically asks to find the smallest number of length k. Since we want to find the smallest number of length k, thus it provides a hint to use an increasing monotonic stack.

Since we want to find the smallest number, we will loop from front to back. For each number `x`, if pop an item from `mono_stack` if
- `mono_stack` is not empty and
- `len(mono_stack) + (n - i) - 1 >= k` which means we pop an item from the stack (`-1`), the rest of item in stack `len(mono_stack) - 1` + rest of elements `(n - i)` that is `>= k`, then this means we have enough elements to build a subarray size `k`
- `mono_stack[i] > x` we want to pop as many items as possible so that the smallest number (that we can possibly build k items) to the front

We push to `x` to the stack if the length of stack is less than k.
 
## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(k)

## Solution
- [Python](./solution.py)
