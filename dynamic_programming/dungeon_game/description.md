## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 174

## Problem
The demons had captured the princess and imprisoned her in the bottom-right corner of a `dungenon`. The `dungeon` consists of `m x n` rooms laid out in a 2D grid. Our valiant knight was initially positioned in the top-left room and must fight his way though `dungeon` to rescue the princess.

The knight has an initial health point represented by a positive integer. If at any point his health point drops to `0` or below, he dies immediately.

Some of the rooms are guarded by demons (represented by negative integers), so the knight loses heath upon entering these rooms; other rooms are either empty (represented as 0) or contain magic orbs that increase the knight's health (represented by positive integers).

To reach the princess as quickly as possible, the knight decides to move only rightward or downward at each step.

Return the knight's minimum initial health so that he can rescue the princess.

Note that any room contain threats or power-ups, even the first room the knight enters and the bottom right room where the princess is imprisoned.

## Example:
```
Input: dungeons =
  [[-2, -3, 3],
   [-5, -10, 1],
   [10, 30, -5]]
Output: 7
Explanation: the initial health of the knight must be at least 7 if he follows the optimal path: RIGHT -> RIGHT -> DOWN -> DOWN.
```

## General Idea:
Let `dp[i][j]` be the minimum health required from current cell to the desintation. Notice, if we start at `(0, 0)` and reach to `(m - 1, n - 1)`, if any cell > 0, then we do not know if that is the optimal path because there are few possibilities:
- This cell + inf health and require too much health to come to this path (not optimal)
- This cell + inf health and reach to the bottom right corner require inf health (optimal path)
This provides a hint for us to work backward and start with `m - 1, n - 1`. Then we calculate the minimum health required to reach the current cell. So for any `i` and `j`, `dp[i][j] = dungenon[i][j] + min(dp[i + 1][j], dp[i][j + 1])` (since we can move down or right). Note if `dp[i][j] > 0`, then no health needed, we can simply set it to `0`. If `dp[i][j] <= 0`, then `dp[i][j] = abs(dp[i][j]) + 1`. + 1 since 0 is also considered death. At the end, return `dp[0][0]`.

## Complexity Analysis
- Runtime Complexity: O(m * n)
- Space Complexity: O(m * n)

## Solution
- [C++](./solution.cpp)
