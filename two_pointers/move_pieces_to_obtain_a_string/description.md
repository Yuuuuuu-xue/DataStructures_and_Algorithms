# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2337

## Problem
You are given two strings `start` and `target`, both of length `n`. Each string consists only of the characters `'L'`, `'R'`, and `'_'` where:
- The characters `'L'` and `'R'` represent pieces where a piece `'L'` can move to the left only if there is a blank space directly to its left, and a piece `'R'` can move to the right only if there is a blank space directly to its right
- The character `'_'` represents a blank space that can be occupied by any of the `'L'` or `'R'` piecees

Return `true` if it is possible to obtain the string `target` by moving the pieces of the string `start` any number of times. Otherwise, return `false`.

## Example
```
Input: start = "_L__R__R_", target = "L_______RR"
Output: true
```

## Key Idea
Note, to achieve it, if we remove all `_` from both start and target and if they are the same, then we can return `true` otherwise `false`.

We can achieve it by using two pointers i for start and j for target, keep increment until we see either `L` or `R` and we can do a comparison.

If not same, we can return False.
If same, then we need to check its position
- If L, then i needs >= j since we can move to the left
- If R, then i needs <= j since we can move to the right

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)