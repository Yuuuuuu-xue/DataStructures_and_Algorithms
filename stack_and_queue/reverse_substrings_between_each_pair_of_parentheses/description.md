## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1190

## Problem
You are given a string `s` that consists of lower case English letters and brackets.

Reverse the strings in each pair of matching parentheses, starting from the innermost one.

Your result should not contain any brackets.

## Example
```
Input: s = "(abcd)"
Output: "dcba"

Input: "(ed(et(oc))el)"
Output: "leetcode"
Explanation: First, reverse the substring `oc`, then reverse `etco`, and finally the whole string.
```

## Key Idea
When we see a non `)`, we push the characters into a stack. Whenever we see a `)`, we pop all the items until we see `(` and which we also remove. When we pop the item from stack, we join them together until we see a `(`, then we can reverse the string and push it back to the stack.

## Complexity Analaysis
- The time complexity is O(n^2)
- The space complexity is O(n)

## Solution
- [Python](./solution.py)