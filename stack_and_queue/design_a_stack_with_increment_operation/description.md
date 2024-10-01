## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1381

## Problem
Design a stack that supports increment operations on its elements.

Implement the `CustomStack` class:
- `CustomStack(int maxSize)` initializes the object with `maxSize` which is the maximum number of elements in the stack.
- `void push(int x)` adds `x` to the top of the stack if the stack as not reached the `maxSize`.
- `int pop()` pops and returns the top of the stack or `-1` if the stack is empty.
- `void inc(int k, int val)` increments the bottom `k` elements of the stack by `val`. If there are less than `k` elements in the stack, increment all the elements in the stack.

## Example
```
Input: ["CustomStack","push","push","pop","push","push","push","increment","increment","pop","pop","pop","pop"]
[[3],[1],[2],[],[2],[3],[4],[5,100],[2,100],[],[],[],[]]
Output: [null,null,null,2,null,null,null,null,null,103,202,201,-1]
Explanation
CustomStack stk = new CustomStack(3); // Stack is Empty []
stk.push(1);                          // stack becomes [1]
stk.push(2);                          // stack becomes [1, 2]
stk.pop();                            // return 2 --> Return top of the stack 2, stack becomes [1]
stk.push(2);                          // stack becomes [1, 2]
stk.push(3);                          // stack becomes [1, 2, 3]
stk.push(4);                          // stack still [1, 2, 3], Do not add another elements as size is 4
stk.increment(5, 100);                // stack becomes [101, 102, 103]
stk.increment(2, 100);                // stack becomes [201, 202, 103]
stk.pop();                            // return 103 --> Return top of the stack 103, stack becomes [201, 202]
stk.pop();                            // return 202 --> Return top of the stack 202, stack becomes [201]
stk.pop();                            // return 201 --> Return top of the stack 201, stack becomes []
stk.pop();                            // return -1 --> Stack is empty return -1.
```

## Key Idea
We can use an array to represent a stack. We need a stack to store the actual elements but we need to handle the `inc` function efficiently to avoid `O(n)` time complexity for this operation.

To achieve constant time, we can simply use another stack to push the incremented value.

For `push`, we can simply push `0` into this stack. For `inc`, we can simply increment the value at index `k` (or len - 1) by the value. Then for `pop`, we can simply pop the actual value and incremented value and add them together and return. If the incremented stack is not empty, we also need to update the second top item add top item since top item will be poped.

## Complexity Analysis
- Runtime Complexity: O(1) for each operation
- Space Complexity: O(n) overall

## Solution
- [Python](./solution.py)