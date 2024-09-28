## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 641

## Problem
Design your implementation of the circular double-ended queue (deque).

Implement the `MyCircularDeque` class:
- `MyCircularDeque(int k)` initializes the deque with a maximum size of `k`
- `boolean insertFront()` adds an item at the front of Dequeue. Returns `true` if the operation is successful, or `false` otherwise.
- `boolean insertLast()` adds an item at the rear of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `boolean deleteFront()` deletes an item from the front of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `boolean deleteLast()` deletes the last item from the rear of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `int getFront()` returns the front item from the Deque. Returns `-1` if the deque is empty.
- `int getRear()` retursn the last item from the Deque. Returns `-1` if the deque is empty.
- `boolean isEmpty()` returns `true` if the deque is empty, or `false` otherwise.
- `boolean isFull()` returns `true` if the deque is full, or `false` otherwise.

## Example
```
Input: ["MyCircularDeque", "insertLast", "insertLast", "insertFront", "insertFront", "getRear", "isFull", "deleteLast", "insertFront", "getFront"]
[[3], [1], [2], [3], [4], [], [], [], [4], []]
Output: [null, true, true, true, false, 2, true, true, true, 4]

Explanation
MyCircularDeque myCircularDeque = new MyCircularDeque(3);
myCircularDeque.insertLast(1);  // return True
myCircularDeque.insertLast(2);  // return True
myCircularDeque.insertFront(3); // return True
myCircularDeque.insertFront(4); // return False, the queue is full.
myCircularDeque.getRear();      // return 2
myCircularDeque.isFull();       // return True
myCircularDeque.deleteLast();   // return True
myCircularDeque.insertFront(4); // return True
myCircularDeque.getFront();     // return 4
```

## Key Idea
Simply use a double linked list.

## Complexity Analysis
- Runtime Complexity: O(1) for each operation
- Space Complexity: O(n) overall

## Solution
- [Python](./solution.py)