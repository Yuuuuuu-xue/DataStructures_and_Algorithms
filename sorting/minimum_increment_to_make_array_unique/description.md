## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
NMediun 945

## Problem
You are given an integer array `nums`. In one move, you can pick an index `i` where `0 <= i < nums.length` and increment `nums[i]` by `1`.

Return the minimum number of moves to make every value in `nums` unique.

The test cases are generated so that the answer firts in a 32-bit integer.

## Example
```
Input: nums = [1, 2, 2]
Output: 1
Explanation: After 1 move, the array could be [1, 2, 3]
```

## Key Idea
We can simply sort the array from smallest to largest, then move each number to its neartest integer (largest). Note, if we have numbers `x < y < a <  b`, we can move `x` to `y` to `a`. If we move `x` to `y`, then we can move `y` to `a` which is the same as move `x` to `a` and `y` stays same.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
