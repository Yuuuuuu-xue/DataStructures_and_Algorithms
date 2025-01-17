## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2683

## Problem
A 0-indexed array `derived` with length `n` is derived by computing the bitwise XOR of adjacent values in a binary array `original` of length `n`.

Specifically, for each index `i` in the rane `[0, n - 1]`
- If `i = n - 1`, then `derived[i] = original[i] XOR original[0]`
- Otherwise, `derived[i] = original[i] XOR original[i + 1]`

Given an array `derived`, your task is to determine whether there exists a valid binary array `original` that could have formed `derived`.

Return `true` if such an array exists or false otherwise.
- A binary array is an array containing only 0's and 1's

## Example
```
Input: derived = [1, 1, 0]
Output: true
Explanation: A valid original array that gies derived is [0, 1, 0]
- derived[0] = original[0] XOR original[1] = 0 XOR 1 = 1
- derived[1] = original[1] XOR original[2] = 1 XOR 0 = 1
- dervied[2] = original[2] XOR original[0] = 0 XOR 0 = 0
```

## Key Idea
Note, it will contain binary string so either 1 or 0. And we know that 1 XOR 0 = 1 and 0 XOR 1 = 1, otherwise 0.

If we XOR all the elements of derived, then:
= derived[0] XOR derived[1] XOR ... XOR dervied[-1]
= (original[0] XOR original[1]) XOR (original[1] XOR original[2]) ... XOR ... (derived[n - 1] XOR original[0])

Note each number occurs exactly twice and can be cancelled out. So we can basically XOR all numbers and check the result is 0 or not.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution:
- [Python Solution](./solution.py)