# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1790

## Problem
You are given two strings `s1` and `s2` of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

Return `true` if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return `false`.

## Example:
```
Input: s1 = "bank", s2 = "kanb"
Output: true
```

## Key Idea
We can simply loop over strings at the same time. If `s1[i] != s2[i]`, we check
- if there exists an index `k < i` such that `s1[k] != s2[k]` and
    - If `s1[k] == s2[i]` and `s1[i] == s2[k]`, then we are good, set `k = -1`
    - Otherwise, return false
- Otherwise i = k

We also need a boolean to keep track since we can swap at most once.

At the end, if `k != -1`, means there is a character different and cannot swap, we return `False`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
