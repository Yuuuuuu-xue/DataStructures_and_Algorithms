## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1910

## Problem
Given two strings `s` and `part`, perform the following operation on `s` until all occurrences of the substring `part` are removed:
- Find the leftmost occurrence of the substring `part` and remove it from `s`.

Return `s` after removing all occurrences of `part`.

A substring is a contiguous sequence of characters in a string.

## Example
```
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
```

## Key Idea
Simply use a stack to solve this problem

## Complexity Analaysis
- The time complexity is O(n ^ 2)
- The space complexity is O(n)

## Solution
- [Python](./solution.py)