## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1399

## Problem
You are given an integer `n`.

Each number from `1` to `n` is grouped according to the sum of its digits.

Return the number of groups that have the largest size.

## Example
```
Input: n = 13
Output: 4
Explanation: There are 9 groups in total:
[1, 10], [2, 11], [3, 12], [4, 13], [5], [6], [7], [8], [9]
```

## Key Idea
Simply loop over each number and convert it to the sum of digits, then store in a map. At the end, loop over the map and return the size that has max freq.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
