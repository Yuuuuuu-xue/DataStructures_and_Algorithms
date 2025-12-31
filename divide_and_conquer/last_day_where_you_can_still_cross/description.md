## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1970

## Problem
There is a 1-based binary matrix where `0` represents land and `1` represents water. You are given integers `row` and `col` representing the number of rows and columns in the matrix, respectively.

Initially on day `0`, the entire matrix is land. However, each day a new cell becomes flooded with water. You are given a 1-based 2D array `cells`, where `cells[i] = [r_i, c_i]` represents that on the `ith` day, the cell on the `r_ith` row and `c_jth` column (1-based coordinates) will be covered with water (i.e. changed to 1).

You want to find the last day that is possible to walk from the top to the bottom by only walking on land cells. You can start from any cells in the top row and end at any cell in the bottom row. You can only travel in the four cardinal directions (left, right, up, and down).

Return the last day where it is possible to walk from the top to the bottom by only walking on land cells.

## Example
```
Input: row = 2, col = 2, cells = [[1, 1], [2, 1], [1, 2], [2, 2]]
Output: 2
```

## Key Idea
The key idea of this problem is that if it works with `k` days, the it works with `0` to `k - 1` days. Hence, it provides a hint to solve this problem with binary search. We also need to check if there is an efficient way to solve this problem when fixed a mid value.

Given a number `k`, we want to know if it is possible to travel any cells from top to bottom with cells[:k].

And `0 <= k < n`

Then, we can simply solve this problem with bfs where the starting point is the land at top and we stop at any land at bottom.

## Complexity Analysis
- Runtime Complexity:
 - Binary search over k, hence len(cells)
 - Each binary search takes a bfs search over graph n * m.
 - Hence runtime is O(n * m * lg(len(cells)))
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)