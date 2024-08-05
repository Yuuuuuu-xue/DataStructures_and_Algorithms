## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 2053

## Problem
A distinct string is a string that is present only once in an array.

Given an array of strings `arr`, and an integer `k`, return the `kth` distinct string present in `arr`. If there are fewer than `k` distinct strings, return an empty string `""`.

Note that the strings are considered in the order in which they appear in the array.

## Example
```
Input: arr = ["d", "b", "c", "b", "c", "a"], k = 2
Output: "a"
Explanation: 
The only distinct strings in arr are "d" and "a"
```

## Key Idea
Simply use a hash set to keep track of unique strings. Then loop over arr again to find kth distinct string.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
