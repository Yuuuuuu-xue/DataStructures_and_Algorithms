## LeetCode Problem
Easy 21

## Description
You are given the heads of two sorted linked lists `list1` and `list2`. Merge the two lists in a one sorted list. The list should be made by splicing together the ndoes of the first two lists. Return the head of the merged linked list.

## Example
```
Input: list1 = [1, 2, 4], list2 = [1, 3, 4]
Output: [1, 1, 2, 3, 4, 4]
```

## Basic Idea
Let `curr1` and `curr2` represents two current heads of traversing `list1` and `list2`. Let `sortedHead` be the sorted linked list with a dummy head. And currSorted be the curr heads of traversing the sorted linked list. At the end, return sortedHead->next. While (curr1 and curr2 both not null), we compare
- curr1->val <= curr2->val, then set currSorted->next = curr1, currSorted = currSorted->next, and set curr1 = curr1->next
- curr1->val > curr2->val, then set currSorted->next = curr2, currSorted = currSorted->next, and set curr2 = curr2->next

At the end, check if curr1 is NULL,
- if so, then curr2 is either empty or not, we simply set currSorted->next = curr2.
- If not, then curr2 must be empty, set currSorted->next = curr1.

## Solution
- [C++](./solution.cpp)