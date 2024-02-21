## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Question
Medium 201

## Problem
Given two integers `left` and `right` that represent the range `[left, right]`, return the bitwise AND of all numbers in this range, inclusive.

## Example
```
Input: left = 5, right = 7
Output: 4

Input: 1, right = 2147483647
Output: 0
```

## Key Idea
The key idea of this problem is that if `x` and `y` are different, then `x AND y` must be a smaller number than `x` and `y`. Thus, let `curr` be `y` initially, while `curr > x`, we let `curr = curr & (curr - 1)`.

At the end, return `curr`.
 
## Complexity Analysis
- Time complexity: `O(n)` 
- Space complexity: `O(1)`

## Solution
- [C++](solution.cpp)
