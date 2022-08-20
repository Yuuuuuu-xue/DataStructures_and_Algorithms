## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 486

## Problem
You are given an integer array `nums`. Two player are playing a game with this array: player 1 and player 2.

Player 1 and player 2 take turns, with player 1 starting first. Both players start the game with a score of `0`. At each trun, the player takes one of the numbers from either end of the array (i.e. `nums[0]` or `nums[nums.length - 1]`) which reduces the size fo the array by `1`. The player adds the chosen number to their score. The game ends when there are no more elements in the array.

Return `true` if player 1 can win the game. If the scores of both players are equal, then player 1 is still the winner, and you should also return `true`. You may assume that both players are playing optimally.

## Examples
```
Input: nums = [1, 5, 2]
Output: false
Explanation:
- initially, player 1 can choose between 1 and 2. Choose either one.
- player 2 will choose 5
- player 1 choose the last number, thus 1 + 2 < 5
```

## Key Idea
We will use dynamic programming to solve this problem. Let dp[i][j][k] be the maximum values that player 1 can get with `nums[i:j + 1]` and player `k`'s turn. Note the maximal value for player 1 can get is negative means it's positive value that palyer 2 can get which is equilvanet to the a positive value that player 1 will lose. Then, for `dp[i][j][0]`, player 1 can choose either to start at `i` or `j`, and + the maximal values that player 2 can get * -1. Thus `dp[i][j][0] = max(nums[i] + dp[i + 1][j][1], nums[j] + dp[i][j + 1][1])`. Similarly for the player 2. At the end, we return true iff `dp[0][n - 1][0] >= 0` so that player 1 will gain non-negative value.

As a base case, when `i = j`, we know that player 1 will always get the `nums[i]` and player 2 gets nothing.

## Complexity Analysis
- Runtime Complexity: O(n^2)
- Space Complexity: O(n^2)

## Solution
- [C++](solution.cpp)