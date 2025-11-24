## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## Problem
Given an integer array `nums` and an integer `k`, return the `kth` largest element in the array.

Note that it is the `kth` largest element in sorted order, not the `kth` distinct element.

Can you solve this without sorting?

## Example
```
Input: nums = [3, 2, 1, 5, 6, 4], k = 2
Output: 5
```

## Key Idea
We can use a simple heap to solve this problem.

To find kth largest element, we can use a min heap with max size of k, so and if heap larger than `k` elements, we pop elements out (all smaller elements) and we will pop n - k smaller elements out and k will be the kth largest elements.

## Complexity Analysis
- Runtime Complexity: O(n lg k)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)