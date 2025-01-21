# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2017

## Problem
You are given a 0-indexed 2D array `grid` of size `2 x n`, where `grid[r][c]` represents the number of points at position `(r, c)` on the matrix. Two robots are playing a game on this matrix.

Both robots initially start at `(0, 0)` and want to reach `(1, n - 1)`. Each robot may only move to the right `(r, c)` to `(r, c + 1)` or down `(r, c)` to `(r + 1, c)`.

At the start of the game, the first robot moves from `(0, 0)` to `(1, n - 1)`, collecting all the points from the cells on its path. For all cells `(r, c)` traversed on the path, `grid[r][c]` is set to `0`. Then, the second robot moves from `(0, 0)` to `(1, n - 1)`

## Example:
```
Input: grid = [[2, 5, 4]. [1, 5, 1]]
Output: 4
Explanation: The optimal path for first robot is 2 -> 5 -> 5 -> 1
Then left with [[0, 0, 4], [1, 0, 0]]
And for second robot, it will be 4.
```

## Key Idea
Note, the key idea of this problem is that the grid has a size `2 x n` and robot cannot move up or left.

For first robot, it has `n` choices to move down and then move to the right until destination.

If first robot decides to move down at index `i`, it means second robot has two options:
- Move down initially to collect all points at grid[1][j] where j < i
- Move all the way to the right and move down, collect all points at grid[0][j] for j > i

Thus, we can simply traverse `n` choices, and check two possible values and max the two possible choice since robot 2 wants to maximize this point. Then minimize all possible values from `n` choices since robot 1 wants to minimize this point.

To find all points for grid[1][j] where j < i and grid[0][k] where k > i, we can simply use a prefix array to compute this in constant time.


## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
