## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1856

## Problem
The min-product of an array is equal to the mininum value in the array multiplied by the array's sum.
- For example, the array `[3, 2, 5]` (minimum value is `2`) has a min-product of `2 * (3 + 2 + 5) = 2 * 10 = 20`.

Given an array of integers `nums`, return the maximum min-product of any non-empty subarray of `nums`. Since the answer may be large, return it modulo `10**9 + 7`.

Note that the min-product should be maximized before performing the modulo operation. Testcases are generated such that the maximum min-product without modulo will fit in a 64-bit signed integer.

A subarray is a contiguous part of an array.

## Example
```
Input: nums = [1, 2, 3, 2]
Output: 14
Explanation: The maximum min-product is achieved with the subarray [2, 3, 2], the sum is 2 + 3 + 2 = 7 and min value is 2, thus 7 * 2 = 14
```

## Key Idea
We will loop over each element from start to back and for each element `x`, we will use a decreasing monotonic stack. For each number `x`, we pop an item `smaller_item` from mono stack if it has a smaller value or equal to `x`. Try we try to make `smaller_item` be the smallest value in the subarrray and thus it should sum up to `mono_stack[-1]` if `mono_stack` is not empty. Then the sum will be `smaller_item.curr_sum - mono_stack[-1].curr_sum`. 

To achieve this efficently, we push `(i, curr_sum)` to the monotonic stack.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
