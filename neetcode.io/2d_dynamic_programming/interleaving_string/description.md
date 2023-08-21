## LeetCode Problem
Medium 97

## Description
Given strings `s1`, `s2`, and `s3`, find whether `s3` is formed by an interleaving of `s1` and `s2`.

An interleaving of two strings `s` and `t` is a configuration where `s` and `t` are divided into `n` and `m` substrings respectively such that
- `s = s1 + s2 + ... + sn`
- `t = t1 + t2 + ... + tm`
- `| n - m |  <= 1`
- The interleaving is `s1 + t1 + s2 + t2 + ... + ...`

## Example
```
Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
Output: true
Explanation:
- Split s1 into "aa" + "bc" + "c"
- Split s2 into "dbbc" + "a"
- Thus s3 = "aa" + "dbbc" + "bc" + "a" + "c"

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
Output: false

Input: s1 = "", s2 = "", s3 = ""
Output: true
```

## Basic Idea
A simple base case is that if `s1.size() + s2.size() != s3.size()`, then we can return `false` immediately.

We will solve this problem via dynamic programming. Let `dp[i][j] = true` if we can find the interleaving of `s1[:i]` and `s2[:j]` of `s3[:i+j]`.

A simple base case is that `dp[0][0] = true`. Then for `0 <= i <= n = s1.size()` and `0 <= j <= m = s2.size()`, `dp[i][j] = 1` if (notice we need to -1 since 0 means empty string not 0-index)
- `if i == 0 and j == 0`, both empty string, thus `true`
- `if i == 0`, then s1 is empty string and we must use s2, thus `s2[j - 1] == s3[i + j - 1] && dp[i][j - 1] == true`
- `if j == 0`, then s2 is empty string and we must use s1, thus `s1[i - 1] == s3[i + j - 1] && dp[i - 1][j] == true`
- `if i > 0 and j > 0`, then
  - `s1[i - 1] == s3[i + j - 1] && dp[i - 1][j] == true` or
  - `s2[j - 1] == s3[i + j - 1] && dp[i][j - 1] == true`

## Complexity Analysis
- Runtime Complexty: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](./solution.cpp)