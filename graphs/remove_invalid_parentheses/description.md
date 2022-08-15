## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Hard 301

## Description
Given a string `s` that contains parentheses and letters, remove the minimum number of invalid parentheses to make the input string valid.

Return all the possible results. You may return the answer in any order.

## Example
```
Input: s = "()())()"
Output: ["(())()", "()()()"]

Input: s = "(a)())()"
Output: ["(a())()", "(a)()()"]

Input: s = ")("
Output: [""]
```

## Key Idea
Notice we want all the possible results of removing minimum number of invalid parentheses, this immediately provides a hint to use the BFS to solve this problem. For each level, we will try to remove either `(` or `)`, then push it to the queue. When we have a one valid parentheses, then pop all the item (same level) from the queue and push it to the output array if valid parentheses.

## Solution
- [C++](solution.cpp)
