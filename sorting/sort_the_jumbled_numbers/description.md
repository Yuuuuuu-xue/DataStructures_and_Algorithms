## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2191

## Problem
You are given a 0-indexed integer array `mapping` which represents the mapping rule of a shuffled decimal system. `mapping[i] = j` means digit `i` should be mapped to digit `j` in this system.

The mapped value of an integer is the new integer obtained by replacing each occurrence of digit `i` in the integer with `mapping[i]` for all `0 <= i <= 9`.

You are also given another integer array `nums`. Return the array `nums` sorted in non-decreasing order based on the mapped values of its elements.

Notes:
- Elements with the same mapped values should appear in the same relative order as in the input
- The elements of `nums` should only be sorted based on their mapped values and not be replaced by them.

## Example
```
Input: mapping = [8, 9, 5, 0, 2, 1, 3, 5, 7, 6], nums = [991, 338, 38]
Output: [338, 38, 991]
```

## Key Idea
Simply convert the number to a new list numbers and sort it, then return the original number.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
