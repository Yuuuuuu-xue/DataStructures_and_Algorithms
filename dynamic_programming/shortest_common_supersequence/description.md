## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1092

## Problem
Given two strings `str1` and `str2`, return the shortest string that has both `str1` and `str2` as subsequences. If there are multiple valid strings, return any of them.

A string `s` is a subsequence of string `t` if deleting some number of characters from `t` (possibly `0`) results in the string `s`.

## Example
Input: str1 = "abac", str2 = "cab"
Output: "cabac"


## Key Idea
The final result must contain the longest subsequence between `str1` and `str2`.

Suppose we know the length of the longest subsequence of any substring `str1` and `str2`. Then, we can loop over the strings `str1` at index `i` and `str2` at index `j`. If 
- `str1[i] == str2[j]`, then we can simply append `str1[i]` to the output character and increment both `i` and `j`.
- `str1[i] != str2[j]`, then we need to add either `str1[i]` or `str2[j]`, not both. How do we know which character we want to add?

Note, if the remaining characters of `str1` has longer subsequence than remaining characters of `str2`, then it means we can take a character of `str1` and continue. If `str2` has the same character in the longest subsequence, it would have the same longest subsequence as str1.

Thus, let `dp[i][j]` represents the value of longest subsequence between `str1[:i]` and `str2[:j]`.

We can simply build it by looping over `i` and `j`, then if `str1[i] == str2[j]`, then `dp[i][j] = 1 + dp[i - 1][j - 1]`.

If it's different, then `dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])`.

Then we can simply loop over the `i` and `j` starting from back so we can compare `dp` with higher value.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [Python Solution](./solution.py)

