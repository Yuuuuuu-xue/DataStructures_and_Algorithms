## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 790

## Problem
You have two types of tiles: a `2 x 1` domino shape and a trimino shape. You may rotate these shapes.

Domino tile: [x x]
Trimino tile: [x  x]
              [x ]

Given an integer `n`, return the number of ways to tile an `2 x n` board. Since the answer may be very large, return it modulo `10 ** 9 + 7`.

In a tiling, every square must be covered by a tile. Two tilings are different if and only if there are two 4-directionally adjacent cells on the board such that exactly one of the tilings has both squares occupired by a tile.
## Example:
```
Input: n = 3
Output: 5
```

## Key Idea
We will solve this problem by dynamic programming.

If `n == 0`, then there is only one possible way.

If `n == 1`, then there is only one possible way to solve this problem. (Vertical of 1 tile)

If `n == 2`, then there is 2 possible ways (2 horizontal or 2 vertical)

If `n == 3`, then there is 5 possible ways to solve this problem.

Then, for the next possible ways, we know that given a number `i > 3`, we know we can take
- At ith column, we take 1 vertical tile, then possible answer is `dp[i - 1]`
- At ith column, it is part of 2 horizontals, thus, `dp[i - 1]`
- At ith column, it is part of L shape, thus, `dp[i - 3]` since it takes  

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
