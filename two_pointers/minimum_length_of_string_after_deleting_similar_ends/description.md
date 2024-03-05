# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1750

## Problem
Given a string `s` consisting only of characters `'a'`, `'b'`, and `'c'`. You are asked to apply the following algorithm on the string any number of times:
1. Pick a non-empty prefix from the string `s` where all the characters in the prefix are equal.
2. Pick a non-empty suffix from the string `s` where all the characters in this suffix are equal.
3. The prefix and the suffix should not intersect at any index
4. The character from the prefix and suffix must be the same
5. Delete the prefix and the suffix

Return the minimum length of `s` after performing athe above operation any number of times (possibly zero times).

## Example:
```
Input: s = "ca"
Output: 2

INput: s = "cabaabac"
Output: 0
Explanation:
- Remove the prefix "c" and suffix "c", endup with "abaaba"
- Remove the prefix "b" and suffix "b"
- Remove the prefix "a" and suffix "a"
```

## Key Idea
Simply use two pointers and remove the same prefix and suffix. If they are different, then return the length.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)