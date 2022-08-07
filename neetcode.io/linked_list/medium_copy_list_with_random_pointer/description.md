## LeetCode Problem
Medium 138

## Description
A linked list of length `n` is given such that each node contains an additional random pointer, which could point to any node in the list, or `null`.

Construct a `deep copy` of the list. The deep copy should consist of exactly `n` brand new nodes, where each new node has its value set to the value of its corresponding original nodes. Both the `next` and `random` pointer of the new nodes should point to new nodes in the copied list such that pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

Return the head of the copied linkedlist.

## Example
```
Input: head = [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]
Output: [[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]
```

## Basic Idea
Since we have a random pointer, we need a way to point the original node to new node. We could use a hashmap that maps the original node to new copied node so we can update the random pointer correctly. However, this requires `O(n)` space. We could modify the original linkedlist `L1 -> L2 -> L3 -> ... -> Ln` into `L1 -> L1' -> L2 -> L2' -> L3 -> L3' -> ... -> Ln -> Ln'`. Then, this way, we could use the same random pointer and then update it correctly at the end. (i.e. to update the random pointer, if it is not NULL, then set it to its next element). This way, we will only need constant space to solve this problem.

## Solution
- [C++](./solution.cpp)