## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 22

## Problem
Given `n` pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

## Example:
```
Input: n = 3
Output: ["((()))", "(()())", "(())()", "()(())", "()()()"]
```

## Key Idea
Since we want to generate all possible solutions, it provides a hint to use a backtracking to solve this problem.

## Complexity Analysis
- Runtime Complexity:
  - The number of recursive call is 2
  - The depth of the recursive call is n
  - Thus the overall runtime is O(2^n)
- Space Complexity: O(n)

## Solution
- [Python](solution.py)