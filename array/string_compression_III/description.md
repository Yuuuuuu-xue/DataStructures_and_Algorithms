# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3163

## Problem
Given a string `word`, compress it using the following algorithm:
- Begin with an empty string `comp`. While `word` is not empty, use the following operation:
    - Remove a maximum length prefix of `word` made of a single character `c` repeating at most 9 times
    - Append the length of the prefix followed by `c` to `comp`
Return the string `comp`


## Example
```
Input: "aaaaaaaaaaaaaabb"
Output: "9a5a2b"
```

## Key Idea
Simply loop over the array and count.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)