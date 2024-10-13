## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 632

## Problem
You have `k` lists of sorted integers in non-decreasing order. Find the smallest range that includes at least one number from each of the `k` lists.

We define the range `[a, b]` is smaller than rnage `[c, d]` if `b - a < d - c` or `a < c` if `b - a == d - c`.

## Example
```
Input: nums = [[4, 10, 15, 24, 26], [0, 9, 12, 20], [5, 18 22, 30]]
Output: [20, 24]
```

## Key Idea
Let curr_max be the maximum of each beginning of the list. Then we can find the minimum of each list and let it be the start of the range, then keep updating the maximum and update the optimal range.

We can use a heap to get the minimum from each list. Then the minimum of each list and curr maximum will be an available range.

At the end, if we finish traversing a list, we can simply return it.

## Complexity Analysis
- Runtime Complexity: O(k * n lg n)
- Space Complexity: O(k)

## Solution
- [Python](./solution.py)