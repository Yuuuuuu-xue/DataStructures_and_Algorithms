## LeetCode Problem
Medium 72

## Description
Given two strings `word1` and `word2`, return the minimum number of operations required to convert `word1` to `word2`.

You have the following three operations permitted on a word:
- insert a character
- delete a character
- replace a character

## Example
```
Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation:
- horse -> rorse (replace 'h' with 'r')
- rorse -> rose (remove 'r')
- rose -> ros (remove 'e')
```

## Basic Idea
We will solve this problem via dynamic programming. Let `dp[i][j]` be the minimum number of operations to convert `word1[:i]` to `word2[:j]`. Then we know
- `dp[0][0] = 0`
- `dp[i][0] = i` since we need to delete all the characters
- `dp[0][i] = i` since we need to insert all the characters
- for `i > 0` and `j > 0`, then `dp[i][j]`:
  - if `word1[i - 1] == word2[j - 1]`, then `dp[i][j] = dp[i - 1][j - 1]`, note we need `i - 1` and `j - 1` for word1 and word2 to access the index
  - replace a character: `dp[i][j] = dp[i - 1][j - 1] + 1`
  - insert a character: `dp[i][j] = dp[i - 1][j] + 1`
  - delete a character: `dp[i][j] = dp[i][j - 1] + 1`

## Complexity Analysis
- Runtime Complexty: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](./solution.cpp)