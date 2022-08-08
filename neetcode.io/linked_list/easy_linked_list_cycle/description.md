## LeetCode Problem
Easy 141

## Description
Given `head`, the head of a linked list, determine if the linked list has a cyhcle in it. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer is connected to. Note that `pos` is not passed as a parameter.

Return `true` if there is a cycle in the linked list. Otherwise, return `false`.

## Example
```
Input: head = [3, 2, 0, -4], pos = 1: 3 -> 2 -> 0 -> -4 -> 2 (pos 1)
Output: true

Input: head = [1, 2], pos = 0: 1 -> 2 -> 1 (pos 0)
Output: true

Input: head = [1], pos = -1
Output: false
```

## Basic Idea
This question is simple if we use a hashset to keep track of the nodes we have seen, then if any node we have seen before, it must have a cycle. However, this solution requires `O(n)` space complexity. Now, consider if two person are running in a cycle, one person runs twice as faster than another person, if they eventually meet at some point, then there must be a cycle. Thus, let `fast` and `slow` be two pointers where `fast` move two items at a time and slow move one item at a time. If they meet, then there must be a cycle. If `fast` meets the end, then there is no cycle.

## Solution
- [C++](./solution.cpp)