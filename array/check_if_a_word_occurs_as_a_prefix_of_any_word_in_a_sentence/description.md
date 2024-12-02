# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1455

## Problem
Given a `sentence` that consists of some words separated by a single space, and a `searchWord`, check if `searchWord` is a prefix of any word in `sentence`.

Return the index of the word in `sentence` (1-indexed) where `searchWord` is a prefix of this word. If `searchWord` is a prefix of more than one word, return the index of the first word (minimum index). If there is no such word return `-1`.

A prefix of a string `s` is any leading contiguous substring of `s`.

## Example:
```
Input: sentence = "i love eating burger", searchWord = "burg"
Output: 4
```

## Key Idea
Simply loop over each word, if `searchWord` is a substring of curr word, return i.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)