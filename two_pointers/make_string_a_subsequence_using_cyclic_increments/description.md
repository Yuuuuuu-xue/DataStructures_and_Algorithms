# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2825

## Problem
You are given two 0-indexed strings `str1` and `str2`.

In an operation, you select a set of indices in `str1` and for each index `i` in the set, increment `str1[i]` to the next character cyclically. That is `'a'` becomes `'b'`, `'b'` becomes `'c'`, and so on, and `'z'` becomes `'a'`.

Return `true` if it is possible to make `str2` a subsequence of `str1` by performing the operation at most once, and `false` otherwise.

Note: a subsequence of a string is a new string that is formed from the original string by deleting some (possibly none) of the character without disturbing the relative positions of the remaining characters.

## Example:
```
Input: str1 = "abc", str2 = "ad"
Output: true
Explanation:
- For index 1, we can increment it from 'c' to 'd' and str2 is a subsequence of str1.
```

## Key Idea
We can simply solve this problem with two pointers. We increment both if current character in `str1` is same as current character in `str2` or increment the character by 1 is same as character in `str2`.

Increment character in `str1` if we cannot do the operation.

At the end, if we have all characters in `str2`, we can return `true` otherwise `false`.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)