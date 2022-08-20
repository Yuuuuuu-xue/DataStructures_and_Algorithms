## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 132

## Problem
Given a strign `s`, partition `s` such that every substring of the partition is a palindrome. Return the minimum custs needed for a plindrome partitioning of `s`.

## Examples
```
Input: s = "aab"
Output: 1
Explanation: The palindrome partitioning ["aa", "b"] could be produced using 1 cut

Input: s = "a"
Output: 0

Input: s = "ab"
Output: 1
```

## Key Idea
We will use Dynamic Programming to solve this problem. Let `dp[i]` be the minimum cuts needed to cut a string `s[:i+1]`. Then we know `dp[0] = 0` and `dp[n - 1]` will be the final solution. Suppose we know that for given any two indices `i` and `j`, we can determine if `s[i:j+1]` is a palindrome in constant time. Then, we can compute `dp[i]` in linear time for given any `i`:
- If we know that `s[0:i + 1]` is a palindrome, then `dp[i] = 0` since no cust needed
- If we know that `s[1:i + 1]` is a palindrome, then we can cut into two strings `s[0:0 + 1]` and `s[1:i + 1]`. Since we know `s[1:i + 1]` is a palindrome, and thus no need a cut and need 1 cut to cut these two strings, then cust needed = `0 + 1 + minCut for s[0:1 + 1] = dp[1]`.
- Thus for any `k` from 1 to i, we can make a cut and determine the minimum cut for `dp[i]`.

Now the question is that how do we determien if `s[i:j +1]` is a palindrome or not. We can let `palindromeDp[i][j]` be true iff `s[i:j+1]` is a palindrome. Then we can compute this table in `O(n^2)`.

## Complexity Analysis
- Runtime Complexity: O(n^2) needed for computing both `dp` and `palindromeDp`
- Space Complexity: O(n^2) needed for computing `palindromeDp` and O(n) needed for computing `dp`

## Solution
- [C++](solution.cpp)