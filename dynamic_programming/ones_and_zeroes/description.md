## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 474

## Problem
You are given an array of binary strings ```strs``` and two integers ```m``` and ```n```.

Return the size of the largest subset of ```strs``` such that there are at most m 0's and n 1's in the subset.

A set x is a subet of a set y if all elements of x are also elements of y.

## Example
```
Input: strs = ["10", "0001", "111001", "1", "0"], m = 5, n = 3
Output: 4
Explanation: The largest subset with at most 5 0's and 3 1's is {"10", "0001", "1", "0"}, so the answer is 4.

Input: strs = ["10", "0", "1"], m = 1, n = 1
Output: 2
Explanation: The largest subset is {"0", "1"}, and so answer is 2.
```

## Key Idea
We will use dynamic programming to solve this problem, similar idea to the knapsack. Let dp[i][j][k] represents the largest subset of at most j 0's and k 1's of considering whether we need to take strs[i] as in the subset. Thus if we can take strs[i] and it contains x of 0's and y of 1's, then we set dp[i][j][k] = max(1 + dp[i-1][j - x][k - y], dp[i - 1][j][k]). And dp[len(strs) - 1][m][n] will be our final solution.

## Solution
- [Java Solution](ones_and_zeroes.java)
- [Python](./solution.py)