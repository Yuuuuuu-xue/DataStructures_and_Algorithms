## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 10

## Problem
Given an input string `s` and a pattern `p`, implement the regular expression matching with support for `.` and `*` where:
- `.` matches any single character
- `*` matches zero or more of the preceding element

## Example
```
Input: s = "aa", p = "a"
Output: false

Input: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".

Input: s = "ab", p = ".*"
Output: true
Explanation: ".*" means zero or more of any character.
```

## Key Idea
We will solve this problem via Dynamic Programming. Let `dp[i][j]` be the true if we can match the string `s[0:i + 1]` with `p[0:j + 1]`. Then we know `dp[0][0]` must be `true` and `dp[s.size()][p.size()]` will be our final solution.

Simply loop over `i` and `j` and for `dp[i][j]`:
- If `p[j - 1] != '.' && dp[i - 1] != '*'`, then we know two characters must match, thus `dp[i][j] = s[i - 1] == p[j - 1] && dp[i - 1][j - 1]`.
- If `p[j - 1] == '.'`, then we can match any character, thus, `dp[i][j] = dp[i - 1][j - 1]`.
- If `p[j - 1] == '*'`, then we can match 0 or more of preceding element, then
  - If repeat 0 time, thus we won't have previous character, then `dp[i][j] = dp[i][j - 2]`, 
  - If repeat at least 1 time, then we have previous character repeat 1 or more time, then `dp[i][j] = dp[i - 1][j] (since at least one character) && (s[i - 1] == p[j - 2] || p[j - 2] == '.') (since we want repeat the same character, thus previous regex character must match with previous string)`

## Solution
- [C++](solution.cpp)