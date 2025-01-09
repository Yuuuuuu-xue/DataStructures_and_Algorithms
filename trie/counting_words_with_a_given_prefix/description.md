## Trie
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 2185

## Problem
You are given an array of strings `words` and a string `pref`.

Return the number of strings in `words` that contain `pref` as a prefix.

A prefix of a string `s` is any leading contiguous substring of `s`.

## Example
```
Input: words = ["pay", "attention", "practice", "attend"], pref = "at"
Output: 2
Explanation: Two strings that contain "at" as a prefix are "attention" and "attend".
```

## Key Idea
When checking a string is a prefix of another string, we can use a trie to solve this problem efficiently.

Thus, we can build a trie from words. A trie node will contain a counter so when we reach to a node, we know the number of words contain this prefix.

## Complexity Analysis
- Runtime Complexity: O(n * m + k) where n = len(words), m = max len of words[i], k = len(pref)
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)