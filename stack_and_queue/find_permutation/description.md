## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 484

## Problem
A permutation `perm` of `n` integers of all the integers in the range `[1, n]` can be represented as a string `s` of length `n - 1` where:
- `s[i] == 'I'` if `perm[i] < perm[i + 1]`, and
- `s[i] == 'D'` if `perm[i] > perm[i + 1]`.

Given a string `s`, reconstruct the lexicographically smallest permutation `perm` and return it.

## Example
```
Input: s = "I"
Output: [1, 2]

Input: s = "DI"
Output: [2, 1, 3]
Explanation: Both [2, 1, 3] and [3, 1, 2] can be represented as "DI" but since we want to find the smallest lexicographical permutation, you should return [2, 1, 3].
```

## Basic Idea
Since the solution wants a lexicographically smallest permutation, thus the first I should have a value of 1. We will loop over the given string, if we have a 'D', Then we push this D into the stack (index). If we have a 'I', then assign a value from current counter and update the current counter by +1. Then we pop all the index of previous D from the stack and assign a value since all the values of D > the first I. If we have a group of D, then it's from largest to smallest, and last D's value must be greater than the next I value. Therefore, we will need a stack to store the previous D's value.

## Solution
- [C++](./solution.cpp)