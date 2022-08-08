## LeetCode Problem
Medium 2

## Description
You are given two non-empty linkedlist representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contain a single digit. Add the two numbers and return the sum as a linedlist. You may assume the two numbers do not contain any leading zero, except the number 0 itself.

## Example
```
Input : l1 = [2, 4, 3], l2 = [5, 6, 4]
Output: [7. 0, 8]
Explanation: 342 + 465 = 807

Input: l1 = [0], l2 = [0]
Output: [0]

Input: l1 = [9, 9, 9, 9, 9, 9, 9], l2 = [9, 9, 9, 9]
Output: [8, 9, 9, 9, 0, 0, 0, 1]
```

## Basic Idea
Simply have two pointers and add the two numbers. If this number < 10, then push a new node with this value, otherwise push a new node with value - 10, and accumulate this value for the next addition.

## Solution
- [C++](./solution.cpp)