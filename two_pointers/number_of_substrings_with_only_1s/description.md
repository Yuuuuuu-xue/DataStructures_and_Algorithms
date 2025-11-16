# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1513

## Problem
Given a binary string `s`, return the number of substrings with all characters `1`'s. Since the answer may be too large, return it modulo `10**9 + 7`.

## Example
```
Input: s = "0110111"
Output: 9
```

## Key Idea
We can simply use a window with consecutive ones.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)