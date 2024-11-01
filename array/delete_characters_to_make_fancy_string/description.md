# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1957

## Problem
A fancy string is a string where no three consecutive characters are equal.

Given a string `s`, delete the minimum possible number of characters from `s` to make it fancy.

Return the final string after the deletion. It can be shown that the answer will always be unique.

## Example
```
Input:s = "leeetcode"
Output: "leetcode"
Explanation: Remove 'e' from the first group of 'e' to create "leetcode"
```

## Key Idea
If we remove a character in a middle of string, it takes `O(n)` becuase it needs to shift the rest of character. Thus, we can simply copy a new string. We copy the first two characters, then add next character only if it's not equal to the previous two characters.

## Time Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)