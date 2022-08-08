## LeetCode Problem
Hard 25

## Description
Given the `head` of a lined list, reverse the nodes of the list `k` at a time, and retur nthe modifed list. `k` is a positive integer that is less than or equal to the length of hte lined list. If the number of nodes is not a multiple of `k`, then the left-out nodes, in the ned, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

## Example
```
Input: head = [1, 2, 3, 4, 5], k = 2
Output: [2, 1, 4, 3, 5]

Input: head = [1, 2, 3, 4, 5], k = 3
Output: [3, 2, 1, 4, 5]
```

## Basic Idea
First of all, we want to get the length of the linked list, therefore, we know when to stop. Then simply perform a reverse for each sub group of length `k`.

## Solution
- [C++](./solution.cpp)