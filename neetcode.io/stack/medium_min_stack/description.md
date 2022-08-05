## LeetCode Problem
Medium 155

## Description
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time. Implement the `MinStack` class:
- `MinStack()` initializes the stack object.
- `void push(int val)` pushes the element `val` onto the stack.
- `void pop()` removes the element on the top of the stack.
- `int top()` gets the top element of the stack.
- `int getMin()` retrieves the minimum element in the stack.
You must implement a solution with `O(1)` time complexity for each function.

## Example
```
Input:
["MinStack", "push", "push", "push", "getMin", "pop", "top", "getMin"]
[[], [-2], [0], [-3], [], [], [], []]

Output:
[null, null, null, null, -3, null, 0, -2]
```

## Basic Idea
Simply use a stack of pair (value, minValue) that represents the value pushed into the stack and minimum value in the stack when we push an item to this stack. Then we can make every operation in constant time.

## Solution
- [C++](./solution.cpp)