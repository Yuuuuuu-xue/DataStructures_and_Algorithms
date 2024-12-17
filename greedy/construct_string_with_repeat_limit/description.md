## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2182

## Problem
You are given a string `s` and an integer `repeatLimit`. Construct a new string `repeatLimitedString` using the characters of `s` such that no letter appears more than `repeatLimit` times in a row. You do not have to use all characters from `s`.

Return the lexicographically largest `repeatLimitedString` possible.

A string `a` is lexicographically larger than a string `b` if in the first position where `a` and `b` differ, string `a` has a letter than appears later in the alphabet than the corresponding letter in `b`. If the first `min(a.length, b.length)` characters do not differ, then the longer string is lexicographically larger one.

## Example
```
Input: s = "cczazcc", repeatLimit = 3
output: "zzcccac"
```

## Key Idea
We can solve this problem with greedy. We want to have string like "zzz...yyy...bbb...aaa". If character is repeated more than `repeatLimit`, then we will use one character of next largest character, then repeat the process.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)