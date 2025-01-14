## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2657

## Problem
You are given two 0-indexed integer permutations `A` and `B` of length `n`.

A prefix common array of `A` and `B` is an array `C` such that `C[i]` is equal to the count of numbers that are present at or before the index `i` in both `A` and `B`.

Return the prefix common array of `A` and `B`.

A sequence of `n` integers is called a permutation if it contains all integers from `1` to `n` exactly once.

## Example
```
Input: A = [1, 3, 2, 4], B = [3, 1, 2, 4]
Output: [0, 2, 3, 4]
Explanation:
- At i = 0, no number is common, so C[0] = 0
- At i = 1, 1 and 3 are common in A and B, so C[1] = 2
- At i = 2, 1, 2 and 3 are common in A and B, so C[2] = 3
- At i = 3, 1, 2, 3 and 4 are common in A and B, so C[3] = 4
```

## Key Idea
Note, we can assume that A and B are both permutation of integers from 1 to n. This means they don't have duplicate. We can simply use a map and when a number has a frequency of 2, then it means it is a common number between A and B.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
