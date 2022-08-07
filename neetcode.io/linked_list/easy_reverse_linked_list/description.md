## LeetCode Problem
Easy 206

## Description
Given the `head` of a singly linked list, reverse the list, and retur nthe reversed list.

## Example
```
Input: head = [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]

Input: head = [1, 2]
Output: [2, 1]

Input: head = []
Output: []
```

## Basic Idea
Let `curr` represents the current head we are travelling. Let `reverseHead` represents the head of the reversed linked list. While curr is not null, we:
- Save curr.next to a temp variable.
- Points curr.next to reverseHead.
- Set reverseHead to curr.
- Set curr = temp.next.

At the end, return reverseHead.

## Solution
- [C++](./solution.cpp)