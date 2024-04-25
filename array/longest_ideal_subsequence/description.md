# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2370

## Problem
You are given a string `s` consisting of lowercase letters and an integer `k`. We call a string `t` ideal if the following conditions are satisfied:
- `t` is a subsequence of the string `s`
- The absolute difference in the alphabet order of every two adjacent letter in `t` is less than or equal to `k`

Return the length of the longest ideal string.

A subsequence is a string that can be derived from another string by deleting some or no characters without cahnging the order of the remaining characters.

Note that the alphabet order is not cyclic. For example, the absolute difference in the alphabet order of `'a'` and `'z'` is `25` not `1`.

Assume `s` consists of lowercase English letters. `0 <= k <= 25`.

## Example
```
Input: s = "abcd", k = 3
Output: 4
Explanation: the longest ideal string is "abcd"
```

## Key Idea
Let max_len be an array where `max_len[0]` represents the maximum length ending at `a` and `max_len[25]` represents the maximum length ending at `z`. For any character `c`, any subsequence string ending at `c - k` to `c + k` (inclusive) works.

## Complexity Analysis
- Runtime Complexity: O(26 * n)
- Space Complexity: O(26)

## Solution
- [C++](./solution.py)