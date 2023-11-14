## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1930

## Problem
Given a string `s`, return the number of unique palindromes of length three that are a subsequence of `s`.

Note that even if there are multiple ways to obtain the same subsequences, it is still only counted once.

A palindrome is a string that reads the same forwards and backwards.

A subsequence of a string is a new string generated from the original string with some cahracters (can be none) deleted without changing the relative order of the remaining charactrers.

For example "ace" is a subsequence of "abcde"

`s` consists of only lowercase English letters.

## Example
```
Input: s = "aabca"
Output: 3
Explanation: The 3 palindromic subsequences of length 3 are:
- "aba"
- "aaa"
- "aca"

Input: "abc"
Output: 0

Input: "bbcbaba"
Output: 4
Explanation: The 4 palindromic subseuqences of length 3 are:
- "bbb"
- "bcb"
- "bab"
- "aba"
```

## Key Idea
Let `m` be a map that maps a character to a pair `[first_i, last_i]`.

Note the palindromic subsequences can be `a*a`, `b*b`, ..., `z*z`. Then we simply loop over `c` from `a` to `z`, then loop characters `x` from `first_i of c + 1` to `last_i of c - 1`, and update the counter if there is a new character. For this, we can either use a set or a bitmask.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)