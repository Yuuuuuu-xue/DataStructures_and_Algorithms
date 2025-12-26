## Rolling Hash
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard

## Problem
A string is called a happy prefix if it is a non-empty prefix which is also a suffix (excluding itself).

given a string `s`, return the longest happy prefix of `s`. Return an empty string `""` if no such prefix exists.

## Example
```
Input: s = "level"
Output: "l"
Explanations:
- s contains 4 prefix excluding itself ("l", "le", "lev", and "leve")
- suffix ("l", "el", "vel", "evel")

Input: s = "ababab"
Output: "abab"
Explanation: "abab" is the largest prefix which is also suffix.
```

## Key Idea
We can use rolling hash to keep building the has value of the prefix and suffix. If they are the same, we do a sanity check to verify they are actually the same to avoid collision and record the largest value.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)