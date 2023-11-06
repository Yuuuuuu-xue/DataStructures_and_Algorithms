## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1845

## Description
Design a system that manages the reservation state of `n` seats that are numbered from `1` to `n`.

Implement the `SeatManager` class:
- `SeatManager(int n)` initializes a `SeatManager` object that will manage `n` seats numbered from `1` to `n`. All seats are initially available
- `int reserve()` fetches the smallest-numbered unreserved seat, reserves it, and returns its number
- `void unreserve(int seatNumber)` unreserves the seat with the given `seatNumber`

You can assume that
- for each call to `reserve`, it is guaranteed that there will be at least one unreserved seat
- for each call to `unreserve`, it is guaranteed that `seatNumber` will be reserved

## Example
```
SeatManager seatManager = new SeatManager(5);
seatManager.reserve(); // 1
seatManager.reserve(); // 2
seatManager.unreserve(2);
seatManager.reserve(); // 3
seatManager.reserve(); // 4
```

## Key Idea
Simply just use a min heap to keep track of the all the available seats. When `reserve` is called, return the `extractMin`. When `unreserve` is called, simply put it in the heap.

## Complexity Analysis
- Runtime Complexity:
  - Constructor: O(n) to build the heap
  - Reserve: O(lg n)
  - Unreserve: O(lg n)
- Space Complexity: O(n) overall for the heap

## Solution
- [C++](./solution.cpp)