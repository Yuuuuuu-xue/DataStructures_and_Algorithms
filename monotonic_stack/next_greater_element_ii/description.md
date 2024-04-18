## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 503

## Problem
Given a circular integer array `nums` (i.e., the next element of `nums[nums.length - 1]` is `nums[0]`), return the next greater number for every element in `nums`.

The next greater number of a number `x` is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return `-1` for this number.

## Example
```
Input: nums = [1, 2, 1]
Output: [2, -1, 2]
Explanation:
- The first 1's next greater number if 2
- The number 2 can't find next greater number
- The second 1's next greater number needs to search circularly, which is also 2.
```

## Key Idea
Since we need to find the next greater element, it provides a hint to use a monotonic stack to solve this problem. Thus, let `mono_stack` to solve this problem and we loop over the list from back to front to solve this problem.

However, this problem has a new variant that we can search the list circularly. This means we can search the list doubly from `2n - 1` to `0` and access the number at the index as `i % n`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
