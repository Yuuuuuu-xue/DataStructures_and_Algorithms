## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Meidum 516

## Problem
Given a string `s`, find the longest palindromic subsequence's length in `s`.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

## Example
```
Input: s = "bbbab"
Output: 4
Explanation: One possible longest palindromic subsequence is "bbbb".

Input: s = "cbbd"
Output: 2
Explanation: One possible longest palindromic subsequence is "bb".
```

## Key Idea
For any string `s` and `i = 0` and `j = len - 1` initially, if
- `s[i] == s[j]`, then the optimal solution could be the 2 + optimal solution of indices between `i + 1` and `j - 1`
- `s[i] != s[j]`, then the optimal solution could be
  - optimal solution of indices between `i + 1` and `j`
  - optimal solution of indices between `i` and `j - 1`

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n ^ 2)

## Solution
- [C++](solution.cpp)