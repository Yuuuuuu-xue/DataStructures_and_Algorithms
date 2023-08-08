## LeetCode Problem
Easy 703

## Description
Design a class to find the `kth` largest element in a stream. Note that it is the `kth` largest element in the sorted order, not the `kth` distinct element.

Implement `KthLargest` class:
- `KthLargest(int k, int[] nums)` initializes the object with the integer `k` and the stream of integers `nums`.
- `int add(int val)` appends the integer `val` to the stream and returns the element representing the `kth` largest element in the stream.

## Example
```
KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);
kthLargest.add(3); // return 4
kthLargest.add(5); // return 5
kthLargest.add(10); // return 5
kthLargest.add(9); // return 8
kthLargest.add(4); // return 8
```

## Basic Idea
Let `pq` be a priority queue with min heap implementation and size `k`. Note, the top element of this min heap will be the kth largest element in the stream. Everytime we add an item to `pq`, we always need to make sure `pq` contains exactly `k` element

## Complexity Analysis
- Constructor:
  - Time Complexity: O(n * lg n)
  - Space Complexity: O(n)
- add:
  - Time Complexity: O(lg k). For first call to add(), O((n - k) * lg k) for removing n - k elements in the heap
  - Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)