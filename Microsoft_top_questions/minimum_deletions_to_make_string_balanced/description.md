## LeetCode Question
Medium 1653

## Description
You are given a string `s` consisting only of characters `'a'` and `'b'`.

You can delete any number of characters in `s` to make `s` balanced, `s` is balanced if there is no pair of indicies `(i, j)` such that `i < j` and `s[i] = 'b'` and `s[j] = 'a'`.

Return the minimum number of deletions needed to make `s` balanced.

## Example
```
Input: s = "aababbab"
Output: 2
Explanation: You can either:
- Delete the characters at 0-indexed positions 2 and 6 ("aababbab" -> "aaabbb")
- Delete the characters at 0-indexed positions 3 and 6 ("aababbab" -> "aabbbb")

Input: s = "bbaaaaabb"
Output: 2
Explanations: The only solution is to delete the first two characters.
```

## Key Idea
We will solve this question via Dynamic Programming. Let `dp[i][0]` be the minimum number of deletions such that `s[:i + 1]` is balanced and ending with `'a'`. Similarly, let `dp[i][1]` be the minimum number of deletions such that `s[:i + 1]` is balanced and ending with `'b'`. Then the base case will be `dp[0][0] = 0` if `s[0] == 'a'` else `1`. Let `dp[0][1] = 0` if `s[0] == 'b'` else `0`. Then for any `i > 1`:
- If `s[i] == 'a'`, then
  - `dp[i][0] = dp[i - 1][0]`.
  - Delete current `'a'` and end with `b`, `dp[i][1] = 1 + dp[i - 1][1]`.
- If `s[i] == 'b'`, then
  - Delete current `'b'` and thus `dp[i][0] = 1 + dp[i - 1][0]`
  - Append `b` to either previous string ending with `'a'` or `'b'`. Thus `dp[i][1] = min(dp[i - 1][0], dp[i - 1][1])`  
Notice all the dp depends only previous value, we can futher reduce the O(n) space to O(1) space.

## Complexity Analysis
- Time complexity: O(n)
- Space complxity: O(1)

## Solution
- [C++](solution.cpp)