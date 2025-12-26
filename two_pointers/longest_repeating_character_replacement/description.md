# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium

## Problem
You are given a string `s` and an integer `k`. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most `k` times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

## Example:
```
Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.

Input: s = "AABABBA", k = 1
Output: 4
```

## Key Idea
We can use a sliding window to represent the window that all characters will be the same characters in the window. We will change all characters in the window to some most frequent character. If `k > 0`, then even the new character is different, we can still swap it. However, if `k == 0`, then we need to move the left window to move some character that is different.

Since the character is always uppercase letter, we can always loop over 26 English characters and figure out how many characters we need to change to most frequent.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)