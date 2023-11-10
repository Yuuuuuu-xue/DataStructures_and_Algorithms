## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 1743

## Description
There is an integer array `nums` that consists of `n` unique elements, but you have forgotten it. However, you do remember every pair of adjacent elements in `nums`.

You are given a 2D integer array `adjacentParis` of size `n - 1` where each `adjacentPairs[i] = [u_i, v_i]` indicates that the elements `u_i` and `v_i` are adjacent in `nums`.

It is guaranteed that every adjacent pair of elements `nums[i]` and `nums[i + 1]` will exist in `adjacentPairs`, either as `nums[i], nums[i + 1]` or `nums[i + 1], nums[i]`. The pair can appear in any order.

Return the original array `nums`. If there are multiplke solutions, return any of them.

## Example
```
Input: adjacentPairs = [[2, 1], [3, 4], [3, 2]]
Output: [1, 2, 3, 4]
Explanation: This array has all its adjacent pairs in adjacentPairs.
```

## Key Idea
An adjacent pair `[u_i, v_i]` means `u_i` is `v_i`'s neighbor and vice versa. It is guaranteed that the graph is connected and thus a simple DFS will work.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
