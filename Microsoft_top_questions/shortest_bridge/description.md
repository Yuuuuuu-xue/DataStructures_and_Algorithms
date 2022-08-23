## LeetCode Question
Medium 934

## Description
You are given an `n x n` binary matrix `grid` where `1` represents land and `0` represents water.

An island is a 4-directionally connected group of `1`'s not connected to any other `1`'s. There are exactly two islands in `grid`.

You may change `0`'s to `1`'s to connect the two islands to form one island. Return the smallest number of `0`'s you must flip to connect the two islands.

## Example
```
Input: grid =
  [[0, 1],
   [1, 0]]
Output: 1

Input: grid =
  [[0, 1, 0],
   [0, 0, 0],
   [0, 0, 1]]
Output: 2

Input; grid =
  [[1, 1, 1, 1, 1],
   [1, 0, 0, 0, 1],
   [1, 0, 1, 0, 1],
   [1, 0, 0, 0, 1],
   [1, 1, 1, 1, 1]]
Output: 1
```

## Key Idea
We will find the first island using DFS to explore all the 1's. Then we will store the position of those island and perform a BFS on it. The number of level that we perform BFS will provide a solution to us.

## Complexity Analysis
- Time complexity: O(n ^ 2)
- Space complxity: O(1): we will modify the matrix directly

## Solution
- [C++](solution.cpp)