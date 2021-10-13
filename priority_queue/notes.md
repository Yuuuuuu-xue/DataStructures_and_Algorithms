DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Priority Queue ADT](#priority-queue-adt)
    - [Data:](#data)
    - [Operations:](#operations)
- [Nearly Complete Binary Tree](#nearly-complete-binary-tree)
- [Max Heap](#max-heap)
- [Min Heap](#min-heap)
- [Examples:](#examples)
    - [Array Based Implementation](#array-based-implementation)
    - [Heap Sort](#heap-sort)
    - [O(n) Build Heap](#on-build-heap)


## Priority Queue ADT
#### Data:
- A collection of items PQ where each item x has an associated priority
#### Operations:
- **Insert(PQ, x, priority)**: add x to the priority queue PQ with the given priority
- **FindMax(PQ)**: return an item in PQ with the highest priority
- **ExtractMax(PQ)**: remove and return an item from PQ with the highest priority

## Nearly Complete Binary Tree
- binary tree
- every row is completely filled except possibly the last (lowest) row
- lowest row is filled from the left

## Max Heap
- the value at every node is equal to or greater than the value of its immediate children.
- it is a nearly complete binary tree

## Min Heap
- the value at every node is equal to or less than the value of its immediate children.
- it is a nearly complete binary tree


## Examples:

#### [Array Based Implementation](implmentation_of_heap/description.md)
#### [Heap Sort](heap_sort/description.md)
#### [O(n) Build Heap](build_heap/description.md)