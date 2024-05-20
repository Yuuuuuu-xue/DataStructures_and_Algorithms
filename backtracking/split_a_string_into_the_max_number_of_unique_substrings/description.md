## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1593

## Problem
Given a string `s`, return the maximum number of unique substrings that the given string cna be split into.

You can split string `s` into any list of non-empty substrings, where the concatenation of the substrings forms the original string. However, you must split the substrings such taht all of them are unique.

A substring is a contiguous sequence of characters within a string.

## Key Idea
For each index `i`, we loop over length `len` from `1` to `n - len(s)`, then we insert `s[i:i+len]` to the set, recursively solve the problem, then remove from the set.

## Complexity Analysis
- Runtime Complexity: O(n ^ k) where n is the number of recursive calls and k is maximum depth of recursion which is equal to O(n ^ n) but it's fine since we can assume `1 <= s.length <= 16`
- Space Complexity: O(n) call stack

## Solution
- [C++](solution.cpp)