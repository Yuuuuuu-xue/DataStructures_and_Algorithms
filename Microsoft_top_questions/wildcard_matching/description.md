## LeetCode Question
Hard 44

## Description
Given an input string `s` and a pattern `p`, implement wildcard pattern matching with support for `?` and `*` where:
- `?` matches any single character
- `*` matches any sequence of characters (including the empty seqeuence)

## Example
```
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa"

Input: s = "aa", p = "*"
Output: true

Input: s = "cb", p ="?a"
Output: false
```

## Key Idea
We will solve this problem via Dynamic Programming. Let `dp[i][j]` be true iff we can match the string `s[0:i]` with pattern `p[0:j]`. Then `dp[0][0]` is the empty string and empty pattern, thus it is true as a base case. For given any `i` and `j`, we know that if:
- `p[j - 1]` is not `*` and `?`, then the current character must match and also previous substring must match previous sub pattern, thus `dp[i][j] = s[i - 1] == p[j - 1] && dp[i - 1][j - 1]`.

For any empty string with pattern only consisting `*`, then it will be True since all the `*` can match to empty string.

- `p[j - 1]` is `?`, then it matches with any character thus we only need to vertify if previous substring match with previous sub pattern, thus `dp[i][j] = dp[i - 1][j - 1]`.
- `p[j - 1]` is `*`, then it can match with any sequence of characters
  - Match with `0` occurrence: then we know that the whole string s[0:i] must be matched with previous sub pattern `p[0:j - 1]`, then `dp[i][j] = dp[i][j - 1]`.
  - Match with at least 1 occurrence, then we know that the whole everything depends on if previous substring `s[0:i - 1]` is matched with current pattern `p[0:j]`. Thus, `dp[i][j] = `dp[i - 1][j]`.
At the end, `dp[s.size()][p.size()] will be the final solution.

## Complexity Analysis
- Time complexity: O(n * m) where n is s.size() and m is p.size()
- Space complexity: O(n * m)

## Solution
- [C++](solution.cpp)