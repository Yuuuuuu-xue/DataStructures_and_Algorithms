## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Question
Medium 287

## Description
Given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]` inclusive.

There is only one repeated number in `nums`, return this repeated number.

You must solve this problem without modifying the array `nums` and uses only constant extra space.

## Example
```
Input: nums = [1, 3, 4, 2, 2]
Output: 2

Input: nums = [3, 1, 3, 4, 2]
Output: 3
```

## Key Idea
We can sort the input array, then simply compare two adjacent elements. If they are equal, we can return that number.

We can either compare two numbers are equal or use `XOR`, if `x XOR y == 0`, then `x == y`.

## Complexity Analysis
- Time complexity: O(n lg n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)
- [Rust](./solution.rs)