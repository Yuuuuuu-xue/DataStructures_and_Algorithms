## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 909

## Problem
You are given an `n x n` integer matrix `board` where the cells are labeled from `1` to `n^2` in a Boustrophedon style starting from the bottom left of the board (i.e. `board[n - 1][0]`) and alternating direction each row.

You start on square `1` of the board. In each move, starting from square `curr`, do the following:
- Choose a destination square `next` with a label in the range `[curr + 1, min(curr + 6, n ^ 2)]`
- Those choice simulates the result of a standard 6-sided die roll: i.e. there are always at most 6 destinations, regardless of the size of the board
- If `next` has a snake of ladder, you must move to the destination of that snake or ladder. Otherwise, you move to `next`
- The game ends when you reach the square `n^2`

A board square on row `r` and column `c` has a snake or ladder if `board[r][c] != -1`. The destination of that snake or ladder is `board[r][c]`. Squares `1` and `n^2` are not the starting points of any snake or ladder.

Note that you only take a snake or ladder at most once per dice roll. If the destination to a snake or ladder is the start of another snake or ladder, you do not follow the subsequent snake or ladder
- For example, suppose the board is `[[-1, 4], [-1, 3]]` and on the first move, your destination square is `2`. You follow the ladder to square `3`, but do not follow the subsequent ladder to `4`.

Return the least number of dice rolls required to reach the square `n^2`. If it is not possible to reach the square, return `-1`.

## Example
Input: board =
[[-1,-1,-1,-1,-1,-1],
 [-1,-1,-1,-1,-1,-1],
 [-1,-1,-1,-1,-1,-1],
 [-1,35,-1,-1,13,-1],
 [-1,-1,-1,-1,-1,-1],
 [-1,15,-1,-1,-1,-1]]
Output: 4

## Key Idea
For each node, we can simply move 6 possible positions, update the position if it is a snake or ladder.

This provides a hint to use BFS to find the shortest path.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)