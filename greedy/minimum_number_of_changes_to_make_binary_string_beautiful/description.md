## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2914

## Problem
You are given a 0-indexed binary string `s` having an even length.

A string is beautiful if it's possible to partition it into one or more substrings such that:
- Each substring has an even length
- Each substring contains only `1`'s or only `0`'s

You can change any character in `s` to `0` or `1`.

Return the minimum number of changes required to make the string `s` beautiful.

## Example:
```
Input: s = "1001"
Output: 2
Explanation: We changes `s[1]` to `1` and `s[3]` to `0` to get the string "1100".
```

## Key Idea
Suppose we have even number of ones, then we can do nothing.

Suppose we have odd number of ones, then suppose
- we have odd number of zeroes, then we can convert `1` to `0`, then we have even number of ones and zeroes
- we have even number of zeroes, then
    - if we convert `1` to `0`, then we have even number of `1` and odd number of `0`
    - if we convert `0` to `1`, then we have even number of `1` and odd number of `0`
Thus, we can simply loop over, if we have odd number of ones, we can increment the number of convert and skip the next digit.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
