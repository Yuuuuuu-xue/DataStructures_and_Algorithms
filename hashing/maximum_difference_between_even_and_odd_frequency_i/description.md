## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 3442

## Problem
You are given a string `s` consisting of lowercase English letters.

Your task is to find the maximum difference `diff = a_1 - a_2` between the frequency of characters `a_1` and `a_2` in the string such that:
- `a_1` has an odd frequency in the string
- `a_2` has an even frequency in the string

Return this maximum difference.

## Example
```
Input: s = "aaaaabbc"
Output: 3
Explanation: 'a' has frequency 5 and b has even frequency 3.
```

## Key Idea
A simple map that maps character to its frequency.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)