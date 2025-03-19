## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Medium 3191

## Problem
You are given a binary array `nums`.

You can do the following operation on the array any number of times (possibly zero):
- Choose any 3 consecutive elements from the array and flip all of them.

Flipping an element means changing its value from 0 to 1, and from 1 to 0.

Return the minimum number of operations required to make all elements in `nums` equal to 1. If it is impossible, return -1.

## Example
```
Input: nums = [0, 1, 1, 1, 0, 0]
Output: 3
```

## Key Idea
We can use a simple greedy strategy: we traverse from left to right and whenever we see a 0, we flip its value and two values on its right.

This provides the minimum number because when we see a value at 0, we flip it once and we will never flip this value again.

If last or second last has a value 0 after all operations, we return -1.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution:
- [Python](./solution.py)
