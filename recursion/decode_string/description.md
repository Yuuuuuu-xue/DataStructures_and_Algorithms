## Recursion
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium

## Problem
Given an encoded string, return its decoded string.

The encoding rule is `k[encoded_string]` where the `encoded_string` inside the square brackets is being repeated exactly `k` times. Note that `k` is guarnateed to be a positive integer.

You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, `k`. For example, there will noe be input like `3a` or `2[4]`.

The test cases are generated so that the length of the output will never exceed `10^5`.

## Example:
```
Input: s = "3[a]2[bc]"
Output: "aaabcbc"
```

## Key Idea
We will iterate over the input and keep track of the integers.

When we see a `[`, we call a recursive and continues to repeat the process. Then, we get the string and multiply it by the numbers.


## Complexity Analysis
- Runtime Complexity: O(n * k)
 - In the worst case, we repeat string with length `n` with `k` times.
- Space Complexity: O(n * k)

## Solution
- [Python](./solution.py)