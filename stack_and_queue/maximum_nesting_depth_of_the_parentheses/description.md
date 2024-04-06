## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1614

## Problem
A string is a valid parentheses string (denoted VPS) if it meets one of the following:
- It is an empty string `""` or a single character not equal to `(` or `)`
- It can be written as `AB` (A concatenated with B) where `A` and `B` are both VPS
- It can be written as `(A)` where `A` is a VPS

We can similarly define the nesting depth `depth(S)` of any VPS `S` as follows:
- `depth("") = 0`
- `depth(C) = 0`, where `C` is a string with a single character not equal to `(` or `)`
- `depth(A + B) = max(depth(A), depth(B))` where `A` and `B` both are VPS's
- `depth("(" + A + ")") = 1 + depth(A)` where `A` is a VPS.

Given a VPS represented as string `s`, return the nesting depth of `s`.

## Example
```
Input: s = "(1+(2*3)+((8)/4))+1"
Output: 3
```

## Key Idea
We can use a stack to solve this problem. Whenever we encounter `(`, we can push it to the stack and whenever we see `)`, we can pop it from the stack. The maximum length of the stack will be the solution that we are looking for.

However, since we don't need the actual position or the content, we can avoid using a stack and use a counter instead.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)