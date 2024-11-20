# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2516

## Problem
You are given a string `s` consisting of the characters `'a'`, `'b'`, `'c'` and a non-negative integer `k`. Each minute, you may take either the leftmost character of `s`, or the rightmost character of `s`.

Return the minimum number of minutes needed for you to take at least `k` of each character, or return `-1` if it is not possible to take `k` of each character.

## Example:
```
Input: s = "aabaaaacaabc", k = 2
Output: 8
Explanation:
- Take three characters from the left of s. You now have two 'a' characters, and one 'b' character.
- Take five characters from the right of s. You now have four 'a' characters two 'b' characters, and two 'c' characters
```

## Key Idea
We can simply use a sliding window to keep track that we have exactly `k` of each character outside the window. We can achieve it by count each character in the array, then the window should have `c - k` where `c` is the count for the ith character.

We want to maximize the window size such that we have at least `k` elements of each character outside the window.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)