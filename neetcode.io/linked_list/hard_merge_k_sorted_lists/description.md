## LeetCode Problem
Hard 23

## Description
You are given an array of `k` linked-lists `lists`, each linked list is sorted in ascending order. Merge all the linked  lists into one sorted lined list and return it.

## Example
```
Input: lists = [[1, 4, 5], [1, 3, 4], [2, 6]]
Output: [1, 1, 2, 3, 4, 4, 5, 6]
```

## Basic Idea
Simply use a priority queue with min heap that keeps track the current minimum values of each lined list. Extract the min and push it to the new min heap, if that node->next is not null, then push node->next into the min heap.

## Solution
- [C++](./solution.cpp)