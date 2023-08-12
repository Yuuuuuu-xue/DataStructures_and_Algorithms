## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 63

## Problem
You are given an ```m * n``` integer array ```grid```. There is a robot initially located at the top-left corner (i.e. ```grid[0][0]```). The robot tries to move to the bottom-right corner (i.e. ```grid[m - 1][m - 1]```). The robot can only move either down or right at any point in time.

An obstacle and space are marked as ```1``` or ```0``` respectively in ```grid```. A path that the robot takes cannot include any square that is an obstacle.

Return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The testcases are generated so that the answer will be less than or equal to 2 * 10^9.

## Example:
```
Input: obstacleGrid = 
  [[0, 0, 0],
   [0, 1, 0],
   [0, 0, 0]]
Output: 2
Explanation: there is one obstacle in the middle of the 3 * 3 grid above. There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right

Input: obstacleGrid =
  [[0, 1],
   [0, 0]]
Output: 1
```

## General Idea: 
We will use dynamic programming to solve this problem. Let dp[i][j] = number of ways we can reach to the position i, j. Then we know dp[m - 1][n - 1] is our final solution. At any position dp[i][j], we know that if obstacleGrid[i][j] = 1, then we cannot reach to this position since it's an obstacle, thus dp[i][j] = 0. Otherwise, we can move from top (dp[i - 1][j]) and left (dp[i][j - 1]) to this position if any of those are correct index. Note, since we cannot change previous position, we can simply modify the obstacleGrid as dp and thus reach to constant space.

## Solution
- [Java Solution](unique_paths_II.java)
- [Python Solution](unique_paths_II.py)
- [C++ Solution](./solution.cpp)