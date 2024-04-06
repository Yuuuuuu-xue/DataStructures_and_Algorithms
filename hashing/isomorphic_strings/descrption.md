## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 205

## Problem
Given two strings `s` and `t`, determine if they are isomorphic.

Two strings `s` and `t` are isomorphic if the characters in `s` can be replaced to get `t`.

All occurrences of a character must be replaced with another character while preserving the order the characters. No two characters may map to the same character, but a character may map to itself.

## Example
```
Input: s = "egg", t = "add"
Output: true
```

## Key Idea
Simply map a the character to another character in `t`. Since we cannot map to the same character, we can use a hash set to keep track of the seen character.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
