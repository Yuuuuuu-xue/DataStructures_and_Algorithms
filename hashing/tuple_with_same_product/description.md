## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1726

## Problem
Given an array `nums` of distinct positive integers, return the number of tuples `(a, b, c, d)` such that `a * b = c * d` where `a`, `b`, `c` and `d` are elements of `nums`, and `a != b != c != d`.

## Example
```
Input: nums = [2, 3, 4, 6]
Output: 8
Explanation:
There are 8 valid tuples:
1. (2, 6, 3, 4)
2. (2, 6, 4, 3)
3. (6, 2, 3, 4)
4. (6, 2, 4, 3)
5. (3, 4, 2, 6)
6. (3, 4, 6, 2)
7. (4, 3, 2, 6)
8. (4, 3, 6, 2)
```

## Key Idea
Note, we can simply loop over all pairs of integers and compute its product and store it in a map. Then the number of permutation is equal to `num * (num - 1) / 2`.

Then note for each permutation (2, 3, 4, 6), we have 8 different ways to form the same product. Thus, need to multiply it by 8

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n ^ 2)

## Solution
- [Python](./solution.py)
