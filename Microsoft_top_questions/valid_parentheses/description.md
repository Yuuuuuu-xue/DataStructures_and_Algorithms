## LeetCode Question
Easy 20

## Description
Given a string `s` containing just the characters `(`, `)`, `{`, `}`, `[`, `]`, determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.

## Example
```
Input: s = "()"
Output: true

Input: s = "()[]{}"
Output: true

Input: s = "(]"
Output: false
```

## Key Idea
Use a stack, when we see an open bracket, we push it into the stack. When we see a closing bracket, we pop an open bracket from the stack to see if match, if not, then return false. At the end, return true iff stack is empty

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)