#### Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1657

## Problem
Two strings are considered close if you can attain one from the other using the following operations:
- Operation 1: swap any two existing characters. For example, `abcde -> aecdb`
- Operation 2: transform every occurrence of one existing character into another existing character, and do the same with other character. For example `aacabb -> bbcbaa`, all `a`'s turn into `b`'s and all `b`'s turn into `a`'s.

You can use the operations on either string as many times as necessary.

Given two strings `word1` and `word2`, return `true` if `word1` and `word2` are close, and `false` otherwise.

## Example
```
Input: word1 = "abc", word2 = "bca"
Output: true
Explanation:
- Apply operation 1: "abc" -> "acb"
- Apply operation 2: "acb" -> "bca"
```

## Key Idea
For operation 1, then the order does not matter. For operation 2, we can switch characters with the same occurrence.

Thus let `m1` be a map that maps `word1` from character to its occurrence. Same for `m2`. While build the map, we also need to make sure that all the characters in `m1` must be in `m2`. Then simply if they have the same occurrence, then return true otherwise false.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(n + m)

## Solution
- [C++](./solution.cpp)