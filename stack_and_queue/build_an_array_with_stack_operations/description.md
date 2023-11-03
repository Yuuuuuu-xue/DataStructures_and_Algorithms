## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1441

## Problem
You are given an integer array `target` and an integer `n`.

You have an empty stack with the two following operations:
- `push` pushes an integer to the top of the stack
- `pop` removes the integer on the top of the stack.

Use the two stack operations to make the number in the stack (from the bottom to the top) equal to the `target`. You should follow the following rules:
- If the stream of the integers is not empty, pick the next integer from the stream and push it to the top of the stack
- If the stack is not empty, pop the integer at the top of the stack
- If, at any moment, the elementss in the stack (from the bottom to the top) are equal to `target`, do not read new integers from the stream and do not do more operations on the stack.

Return the stack operations needed to build `target` following the mentioned ruiles. If there are multiple valid answers, return any of them.

## Example
```
Input: target = [1, 3], n = 3
Output: ["Push", "Push", "Pop", "Push"]
Explantion:
- Push, stack = [1]
- Push, stack = [1, 2]
- Pop, stack = [1]
- Push, stack = [1, 3]

Input: target = [1, 2, 3], n = 3
Output: ["Push", "Push", "Push"]
Explantion:
- Push, stack = [1]
- Push, stack = [1, 2]
- Push, stack = [1, 2, 3]
```

## Key Idea
Basically start looping from `i` from 1 until we have all the numbers in the stack.

If `i == target[j]`, then we push to the stack and increment `j` by 1. If item is not equal, then we push and pop.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1) no extra space except the return array

## Solution
- [C++](./solution.cpp)