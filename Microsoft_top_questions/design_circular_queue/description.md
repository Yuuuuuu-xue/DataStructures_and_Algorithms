## LeetCode Question
Medium 622

## Description
Design your implementation of the circular queue. The circular queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle. It is also called "Ring Buffer".

One of the benefits of the circular queue is that we can make use of the spaces in front of the queue. In a normal queue, once the queue becomes full, we cannot insert the next element even if there is a space in front of the queue. But using the circular queue, we can use the space to store new values.

Implementation the `MyCircularQueue` class:
- `MyCircularQueue(k)` initializes the object with the size of the queue to be `k`.
- `int Front()` gets the front item from the queue. If the queue is empty, return `-1`.
- `int Rear()` gets the last item from the queue. If the queue is empty, return `-1`.
- `boolean enQueue(int value)` inserts an element into the circular queue. Return `true` if the operation is successful.
- `boolean deQueue()` deletes an element from the circular queue. Return `true` if the operation is successful.
- `boolean isEmpty()` checks whether the circular queue is empty or not
- `boolean isFull()` checks whether the circular queue is full or not.

## Example
```
Input:
["MyCircularQueue", "enQueue", "enQueue", "enQueue", "enQueue", "Rear", "isFull", "deQueue", "enQueue", "Rear"]
[[3], [1], [2], [3], [4], [], [], [], [4], []]

Output:
[null, true, true, true, false, 3, true, true, true, 4]
```

## Key Idea
We do not even needed to implement a circular queue and we can just store the last element `last` with initial value `-1`. When we push an item to the queue, we update the `last` to this item. When the queue is empty, we return `-1` when calling `Rear()`.

## Complexity Analysis
- Time complexity: Each operation will take `O(1)` 
- Space complexity: Each operation will take extra `O(1)` space

## Solution
- [C++](solution.cpp)
