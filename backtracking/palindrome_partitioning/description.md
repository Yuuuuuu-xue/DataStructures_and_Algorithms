## Backtracking
Click [here](../notes.md) to go back to the notes page.

## Problem
Given a string `s`, partition `s` such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of `s`.

A palindrome string is a string that reads the same backward as forward.

## Example:
```
Input: s = "aab"
Output: [["a", "a", "b"], ["aa", "b"]]

Input: s = "a"
Output: [["a"]]
```

## Key Idea
Notice, if we know a string `a` is a palindrome, then we may want to try partition `a[0:n-2], a[n - 1]` as so on. Thus it is clear that we want to use backtracking to solve this problem. However, we may check same string multiple time to see if it is a palindrome. We can obviosuly use a hashset/hashmap but it requires us to construct the string first which may require a linear time to do so. Thus, let `dp[i][j]` be true iff `a[i:j+1]` is a palindrome.

## Complexity Analysis
- Runtime Complexity: For each character, we have two choices:
  1. Create a new palindrome substrings
  2. Be part of the previous existing palindrome substring

  and thus it will be O(2 ^ n). For each substring, we will use O(n) to check if it is a substring or not and O(n) to construct the output array. Thus the overall runtime is O(n * 2 ^ n)
- Space Complexity: We use a `dp` which will take `O(n ^ 2)`.

## Solution
- [C++](solution.cpp)
- [Python](./solution.py)