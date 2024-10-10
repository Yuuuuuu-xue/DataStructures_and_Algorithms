## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 962

## Problem
A ramp is an integer array `nums` is a pair `(i, j)` for which `i < j` and `nums[i] <= nums[j]`. The width of such ramp is `j - i`.

Given an integer array `nums`, return the maximum width of a ramp in `nums`. If there is no ramp in `nums`, return `0`.

## Example
```
Input: nums = [6, 0, 8, 2, 1, 5]
Output: 4
Explanation: The maximum width ramp is achieved at (i, j) = (1, 5), nums[1] = 0, nums[5] = 5
```

## Key Idea
For this problem, we want to find the minimum `i` and maximum `j` such that `nums[i] <= nums[j]`

Note, if we have a number `x` at index `j`, then we don't need to compare `x` with other numbers with index `> j` if there is a number `y` at index `i` where `i < j` and `nums[i] <= nums[j]`.

This suggests us to construct an array such that the array is in decreasing order and still follow the same index as the original array. So not sort the array but filter the array. Thus, it provides a hint that we can constuct a monotonic decreasing stack where each element is strictly decreasing.

After we have the stack, we can iterate over the array from back to front so we can find the maximum index `j`. If we compare it to the top of the stack (current maximum `i`) and if it works, we update the solution and pop the stack. We don't need this `i` because for the next ieration, `j` will be smaller.
 
## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
