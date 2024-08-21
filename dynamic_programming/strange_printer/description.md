## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 664

## Problem
There is a strange printer with the following two special properties:
- The printer can only print a sequence of the same character each time
- At each turn, the printer can print new characters starting from and ending at any place and will cover the original existing characters.

Given a string `s`, return the minimum number of turns the printer needed to print it.
 
## Example
```
Input: s = "aaabbb"
Output: 2
Explanation: Print "aaa" first and then print "bbb"

Input: s = "aba"
Output: 2
Explanation: Print "aaa" first and then print "b"
```

## Key Idea
Let `dp[i][j]` be the minimum number of operations we need to print the characters from `s[i:j+1]`.

Then, for `dp[i][i]`, we know it will be `1` because we need one operator to print a single character.

For, `dp[i][j]`, we know
- if `s[i] == s[j]`, then no extra print, thus `dp[i][j] = dp[i][j - 1]`
- Otherwise, we need one extra operator to print the last character, thus, `dp[i][j] = dp[i][j - 1] + 1` which has the maximum operations. Then, we need to loop over the index from `i` to `j`, then, it tries to look for different index `k`, and `dp[i][k] + dp[k + 1][j]` to try with different combinations.

At the end, `dp[0][n - 1]` will be the final solution.

## Complexity Analysis
- Runtime Complexity: O(n ^ 3)
- Space Complexity: O(n ^ 2)

## Solution
- [Python](./solution.py)