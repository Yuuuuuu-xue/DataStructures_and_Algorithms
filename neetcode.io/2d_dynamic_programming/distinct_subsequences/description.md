## LeetCode Problem
Hard 115

## Description
Given two string `s` and `t`, return the number of distinct subsequence of `s` which equals `t`.

## Example
```
Input: s = "rabbbit", t = "rabbit"
Output: 3
Explanation:
1. (r)(a)(b)(b)b(i)(t)
2. (r)(a)b(b)(b)(i)(t)
3. (r)(a)(b)b(b)(i)(t)
```

## Basic Idea
A simple base case that if `s.size() < t.size()`, we can return 0 immediately.

We will solve this problem via dynamic programming. Let `dp[i][j]` be the number of distinct subsequences of `s[:i]` which equals `t[:j]`. Then we know that:
- `dp[0][0] = 1`
- `dp[i][0] = 1` for `0 <= i <= n`
- `dp[0][j] = 0` for `1 <= j <= m`
- For `1 <= i <= n` and `1 <= j <= m`, then `dp[i][j] =`
  - if `s[i - 1] == t[j - 1]`, then `dp[i][j] += dp[i - 1][j - 1]`.
  - `dp[i][j] += dp[i - 1][j]`

Since we always use `dp[i - 1]`, ideally we can reduce the space complexity to `O(m)`

## Complexity Analysis
- Runtime Complexty: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](./solution.cpp)