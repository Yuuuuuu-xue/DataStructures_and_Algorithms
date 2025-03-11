# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1358

## Problem
Given a string `s` consisting only of characters a, b, and c.

Return the number of subsstrings containing at least one occurrence of all three characters a, b, and c.

## Example
```
Input: s = "abcabc"
Output: 10
```

## Key Idea
We will use a sliding window to solve this problem. The window will contain all characters a, b and c.

Let left and right be two indices and representing the index of the window.

Given left and right with a valid window, we know that s[left:right+1] is a valid solution, and `s[left:right+2]` to `s[left:n]` are all valid solution.

Then we keep moving left until the window is no longer valid.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)