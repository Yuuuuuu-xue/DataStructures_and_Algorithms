## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## Problem
Given an integer `n`, your task is to count how many strings of length `n` can be formed under the following rules:
- Each character is a lower case vowel (`'a'`, `'e'`, `'i'`, `'o'`, `'u'`)
- Each vowel `'a'` may only be followed by an `'e'`
- Each vowel `'e'` may only be followed by an `'a'` or an `'i'`
- Each vowel `'i'` may not be followed by another `'i'`
- Each vowel `'o'` may only be followed by an `'i'` or a `'u'`
- Each vowel `'u'` may only be followed by an `'a'`

Since the answer may be too large, return it modulo `10^9 + 7`.

## Example:
```
Input: n = 1
Output: 5
Explanation: All possible strings are "a", "e", "i", "o", and "u".

Input: n = 2
Output: 10
Explanation: All possible strings are "ae", "ea", "ei", "ia", "ie", "io", "iu", "oi", "ou", and "ua".
```

## General Idea: 
Notice to get number of possible strings of given n, we may need to know the number of possible strings of length n - 1 and check it's last character to build the number of possible strings of length n. Thus, we will solve this problem via Dynamic Programming. Let j = 0, ..., 4 represents 'a', ..., 'u'. Then let dp[i][j] represents the number of possible strings of length `i` ending with `j`. Then dp[i][j] = dp[i - 1][?] depends on the condition given above. Notice, for every dp[i], we only need dp[i - 1], then we can simply use a 1D array of fixed size 5 to solve for dp.

## Solution
- [C++](./solution.cpp)