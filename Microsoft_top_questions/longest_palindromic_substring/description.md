## LeetCode Question
Medium 5

## Description
Given a string `s`, return the longest palindromic substring in `s`.

## Example
```
Input: s = "babad"
Output: "bab"

Input: s = "cbbd"
Output: "bb"
```

## Key Idea
If we know "aba" is a palindrome and then we know "xabax" is also a palindrome in constant time. Thus, it provides a hint to use Dynmaic Programming to solve this problem. Let `dp[i][j]` be true if `s[i:j+1]` is a palindrome. Then we know `dp[0][0], dp[1][1], ..., dp[n][n]` (single character string) is always true. Then for any `dp[i][j]`, we know that `dp[i][j]` is True iff `s[i] == s[j - 1]` and dp[i + 1][j - 1] (if i + 1 <= j - 1) is also True. 

## Complexity Analysis
- Time complexity: O(n^2)
- Space complexity: O(n^2)

## Solution
- [C++](solution.cpp)