## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 931

## Problem
Given an `n x n` array of integers `matrix`, return the minimum sum of any falling path through `matrix`.

A falling path starts at any element in the first row and choose the element in the next row that is either directly below or diagonally left/right. Specifically, the next element from position `(row, col)` will be `(row + 1, col - 1)`, `(row + 1, col)`, or `(row + 1, col + 1)`
 
## Example
```
Input: matrix =
[[2, 1, 3],
 [6, 5, 4],
 [7, 8, 9]]
Output: 13
Explanation: One possible path is : 1 -> 5 -> 7
```

## Key Idea
For each row, we can decide to move 3 directions and break the problem into smaller problems, thus we will solve the problem with dynamic programming.

Let `dp[i]` be the minimum sum starting at `ith` row to the last row. Then simply build the next dp and swap it.

We can simply update `matrix` and thus constant space.

## Complexity Analysis
- Runtime Complexity: O(n * n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)