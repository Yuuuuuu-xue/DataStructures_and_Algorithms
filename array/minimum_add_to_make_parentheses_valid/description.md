# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 921

## Problem
A parentheses string is valid if and only if:
- It is the empty string
- It can be written as `AB` (`A` concatenated with `B`) where `A` and `B` are valid strings, or 
- It can be written as `(A)` where `A` is a valid string

You are given a parentheses string `s`. In one move, you can insert a parenthesis at any position of the string.
- For example, if `s = "()))"`, you can insert an opening parenthesis to be `"(()))"` or a closing parenthesis to be `"())))"`.

Return the minimum number of moves required to make `s` valid. 

## Example
```
Input: s = "())"
Output: 1 

Input: s = "((("
Output: 3
```

## Key Idea
We can simply use a stack to solve this problem. When we see an opening bracket, we push it to the stack. If we see a closing bracket, if 
- stack is empty, then we increment the number of closing brackets by 1, this requires us to insert an opening bracket
- stack is not empty, we pop from the stack

Since we don't need the index of the parenthesis, we can simply use an integer counter instead of the stack.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)