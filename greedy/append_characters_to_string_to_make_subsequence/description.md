## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2486

## Problem
You are given two strigns `s` and `t` consisting of only lowercase English letters.

Return the minimum number of characters that need to be appended to the end of `s` and `t` becomes a subsequence of `s`.

A subsequence is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.

## Example:
```
Input: s = "coaching", t = "coding"
Output: 4
Explanation: Append the characters "ding" to the end of s so that s = "coachingding", then we can delete 3 characters and become `t`.
```

## Key Idea
Simply apply a greedy strategy such that when we use two pointers `i_s` and `i_t`, we move `i_t` when `s[i_s] == s[i_t]` and increment `i_s` each time. At the end, we need to append the rest of characters in `s[i_t:]` to `s`. 

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
