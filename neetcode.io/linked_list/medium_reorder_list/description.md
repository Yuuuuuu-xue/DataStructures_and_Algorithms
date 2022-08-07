## LeetCode Problem
Medium 143

## Description
You are given the head of a signly linked-list. The list can be represented as:
```
L_0 -> L_1 -> ... -> L_{n - 1} -> L_n
```

Reorder the list ot be on the following form:
```
L_0 -> L_n -> L1 -> L_{n - 1} -> ... 
```
You may not modify the values in the list's nodes. Only nodes themselves may be changed.

## Example
```
Input: head = [1, 2, 3, 4]
Output: [1, 4, 2, 3]

Input: head = [1, 2, 3, 4, 5]
Output: [1, 5, 2, 4, 3]
```

## Basic Idea
Let `s` be a stack, simply traverse through the linkedlist and push every nodes into the stack. Then traverse the linkedlist again, for `curr`, we set curr->next = top element of the stack and top element of the stack next to the `curr->next`, repeat the process for head.length // 2. If this length is even, then set the final curr.next to NULL otherwise set final curr.next.next to NULL.

## Solution
- [C++](./solution.cpp)