# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 440.

## Problem
Given two integers `n` and `k`, return the `kth` lexicographically smallest integer in the range `[1, n]`.

## Example
```
Input: n = 13, k = 2
Output: 10
Explanation: The lexicographical order is [1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9], the second smallest number is 10.
```

## Key Idea
Very similar to Medium 386 [problem](../lexicographical_numbers/description.md) where in that question, we find the actual list of all numbers sorted in lexicographically.

We can simply use the same idea and instead of storing the result in the array, we can return it.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)