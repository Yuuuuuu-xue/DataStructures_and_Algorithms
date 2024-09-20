# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 214

## Problem
You are given a string `s`. You can convert `s` to a palindrome by adding characters in front of it.

Return the shortest palindrome you can find by performing this transformation.

## Example
```
Input: s = "aacecaaa"
Output: "aaacecaaa"
```

## Key Idea
A simple idea is that let `r` be the reverse of `s` and we loop over each index `i` from `0` to `n`. At each iteration, we extract `r[i:]` to be the substring that is from left to right of `s`. If s starts with this substring, this means the left over of `r` `r[:i]` will be left and `s = r[i:] + r[i:] + r[:i]` and thus `r[:i] + s` will be a palindrome.

## Complexity
- Time Complexity: O(n ^ 2)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)