## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1002

## Problem
Given a string array `words`, return an array of all characters that show up in all strings within the `words` (including duplicates). You may return the answer in any order.

## Example
```
Input: words = ["bella", "label", "roller"]
Output: ["e", "l", "l"]
```

## Key Idea
Simply build a counter for first word, then for each word, build each word with a new counter and find the intersection (use the minimum counter, if not exist then 0)

## Complexity Analysis
- Runtime Complexity: O(n * k) where k is the max word length
- Space Complexity: O(k)

## Solution
- [Python Solution](./solution.py)