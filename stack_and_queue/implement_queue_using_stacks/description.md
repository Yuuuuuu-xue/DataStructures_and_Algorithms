## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 232

## Problem
Implement a first in first out queue using two stacks. The implemented queue should support all the functions of a normal queue (i.e. `push`, `peek`, `pop` and `empty`).

Implement the `MyQueue` class:
- `void push(int x)` pushes element x to the back of the queue
- `int pop()` removes the element from the front of the queue and returns it
- `int peek()` returns the element at the front of the queue
- `boolean empty()` returns true if the queue is empty, `false` otherwise

## Example
```
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false
```

## Key Idea
For `push`, simply push it to the stack. For `pop` and `peek`, we can push all the elements in a stack to another stack except the last element. Then push back all the elements back to the original stack.

## Complexity Analysis
- Runtime Complexity:
  - push and empty: O(1)
  - pop and peek: O(n)
- Space Complexity:
  - O(1)

## Solution
- [C++](./solution.cpp)