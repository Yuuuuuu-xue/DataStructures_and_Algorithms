# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2559

## Problem
You are given a 0-indexed array of strings `words` and a 2D array of integers `queries`.

Each query `queries[i] = [l_i, r_i]` asks us to find the number of strings present in the range `l_i` to `r_i` (both inclusive) of `words` that start and end with a vowel.

Return an array `ans` of size `queries.length` where `ans[i]` is the answer to the `ith` query.

Note taht the vowel letters are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`

## Example:
```
Input: words = ["aba", "bcb", "ece", "aa", "e"], queries = [[0, 2], [1, 4], [1, 1]]
Output: [2, 3, 0]
```

## Key Idea
When find something in between some ranges i.e. [l_i, r_i], we can simply find the solution for range `[0, r_i]` and `[0, l_i - 1]`. Then the answer in range `[l_i, r_i]` = answer in range `[0, r_i]` - answer in range `[0, l_i - 1]`.

To find the answer in range `[0, x]`, we can simply use a precompute array to store the solution.

To find answer in range `[0, 0]`, we know it's 0 as a base case. Then for answer in range `[0, x]`, we can simply check if `xth` string starts and ends with a vowel, if so, the answer is answer in range `[0, x - 1] + 1` else `[0, x - 1]`.
 
## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)