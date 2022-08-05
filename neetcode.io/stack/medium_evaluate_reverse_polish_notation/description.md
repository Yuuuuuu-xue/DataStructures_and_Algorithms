## LeetCode Problem
Medium 150

## Description
Evaluate the value of an arithmetic expression in Reverse Polish Notation. Valid operators are `+`, `-`, `*`, and `/`. Each operand may be an integer or another expression. Note taht division between two integers should  truncate torward zero.

It is guranateed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.

## Example
```
Input: tokens = ["2", "1", "+", "3", "*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9

Input: tokens = ["4", "13", "5", "/", "+"]
Output: 6
Explanation: (4 + (13 / 5)) = 6
```

## Basic Idea
Simply use a stack to solve this problem. Whenever we see a number, we parse it into integer and push it to the stack. Whenever we see an operator, we pop two items from the stack, perform the operand, and push it back to the stack. At the end, the stack should contain only one item and that's our target value.

## Solution
- [C++](./solution.cpp)