# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2000

## Problem
Given a 0-indexed string `word` and a character `ch`, reverse the segment of `word` that starts at index `0` and ends at the index of the first occurrence of `ch` (inclusive). If the character `ch` does not exist in `word`, do nothing.
- For example, if `word = "abcdefd"` and `ch = "d"`, then you should reverse the segment that starts `0` and ends at `3` (inclusive). The resulting string will be `"dcbaefd"`

Return the resulting string.

## Examples:
```
Input: word = "abcdefd", ch = "d"
Output: "dcbaefd"
```

## Key Idea
We can simply push the characters to a temporary string until we see the first target character `ch`. Then we reverse the string and join it with the rest of string.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)