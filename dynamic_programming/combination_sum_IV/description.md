## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## Problem
Given an array of distinct integers `nums` and a target integer `target`, return the number of possible combinations that add up to `target`. The test cases are generated so that the answer can fit in a 32-bit integer.

## Example:
```
Input: numns = [1, 2, 3], target = 4
Output: 7
Explanation:
The possible combination ways are:
(1, 1, 1, 1)
(1, 1, 2)
(1, 2, 1)
(1, 3)
(2, 1, 1)
(2, 2)
(3, 1)
```

## General Idea:
Let dp[i][j] be a 2D array that represents the number of ways from nums[0:i + 1] that add up to j. Then at the end, dp[nums.size()][target] will be our final solution.

We will iterate j from 1 to target and i from 0 to nums.size(), at each iteration, we check if nums[i] <= j, if so, we set dp[i][j] = dp[i - 1][j - nums[i]] + dp[i - 1][j] otherwise dp[i][j] = dp[i - 1][j]. Note at each iteration, we only get the value of previous row, then we can reduce this dp to 1D array of size target + 1. Initially, dp[0] since if we have nums[i] == j, then simply the value of this way is at least 1.

Note we need to iterate though j first because for each target value `j`, we need to use the existing nums to get matched it. 

## Solution
- [C++](./solution.cpp)
