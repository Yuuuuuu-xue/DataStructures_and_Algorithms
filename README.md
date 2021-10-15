DataStructures_and_Algorithms

Notes from CSC236, 263, 373 and also the LeetCode journey!

Table of Contents:
- [Abstract Data Type and Data Structure](#abstract-data-type-and-data-structure)
- [Runtime Notation](#runtime-notation)
- [Divide and Conquer](#divide-and-conquer)
- [Tree](#tree)
- [Priority Queue](#priority-queue)
- [Hashing](#hashing)
- [Sorting Algorithms](#sorting-algorithms)
- [Graphs](#graphs)
- [Minimum Spanning Tree](#minimum-spanning-tree)
- [Disjoint Set](#disjoint-set)
- [Greedy Algorithm](#greedy-algorithm)

## Abstract Data Type and Data Structure
- **Abstract Data Type**: is the set of objects together with operations.
  - i.e. Stack, Queue, Priority Queue
- **Data Structure**: is the implementation of an ADT.
  - i.e. We can use List or LinkedList to implement Queue

## Runtime Notation
- **Big O**: upper bound, worst case, argue that algorithm executes no more than c * g(n) steps **on every input** of size n.
- **Big Omega**: lower bound, best case, find **one** input on which algorithm executes at least c * g(n) steps.

## Divide and Conquer
- [Notes](./divide_and_conquer/notes.md)
- Examples:
    - [Merge Sort](./divide_and_conquer/merge_sort/description.md)
    - [Find Smallest Not Belong To List](./divide_and_conquer/find_smallest_not_belong/description.md)
    - [Binary Search](./divide_and_conquer/binary_search/description.md)
    - [Bisect Left](./divide_and_conquer/bisect_left/description.md)
    - [Bisect Right](./divide_and_conquer/bisect_right/description.md)
  
## Tree
- [General Notes](./tree/notes.md)
- [Binary Search Tree Notes](./BST/notes.md) \
  Examples:
  - [Implementation](BST/implementation/description.md)
- [AVL](./AVL/notes.md) \
  Examples:
  - [Implementation](AVL/implementation/description.md)

## Priority Queue
- [Notes](./priority_queue/notes.md)
- Examples:
  - [Heap Implementation](./priority_queue/implmentation_heap/description.md)
  - [Heap Sort](./priority_queue/heap_sort/description.md)
  - [O(n) Build Heap](./priority_queue/build_heap/description.md)

## Hashing
- [Notes](./hashing/notes.md)

## Sorting Algorithms
- [Notes](./sorting/notes.md)
- Examples:
  - [Merge Sort](./sorting/merge_sort/description.md)
  - [Quick Sort](./sorting/quick_sort/description.md)

## Graphs
- [Notes](./graphs/notes.md)
- Examples:
  - [Is Bilateral (BFS)](./graphs/is_bilateral/description.md)

## Minimum Spanning Tree
- [Notes](./minimum_spanning_tree/notes.md)
- Examples:
  - [Prim Algorithm](./minimum_spanning_tree/prim_algorithm/description.md)
  - [Kruskal Algorithm](./minimum_spanning_tree/kruskal_algorithm/description.md)

## Disjoint Set
- [Notes](./disjoint_set/notes.md)
- Examples:
  - [Disjoint Set with Path Compression by Rank Implementation](disjoint_set/implementation/description.md)

## Greedy Algorithm
- [Notes](./greedy/notes.md)
- Examples:
  - [Scheduling Intervals](greedy/interval_scheduling/description.md)
  - [Interval Partitioning](greedy/interval_partitioning/description.md)