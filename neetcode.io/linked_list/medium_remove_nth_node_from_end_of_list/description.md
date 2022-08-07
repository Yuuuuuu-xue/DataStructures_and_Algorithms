## LeetCode Problem
Medium 19

## Description
Given the `head` of a linked list, remove the `nth` node from the end of the list and return its head.

## Example
```
Input: head = [1, 2, 3, 4, 5], n = 2
Output: [1, 2, 3, 5]

Input: head = [1], n = 1
Output: []

Input: head = [1, 2], n = 1
Output: [1]
```

## Basic Idea
We can simply loop over the linkedlist and know its length, then we can simply traverse the linked list again and since we know the length, we know when to stop. However, there is a possible way to solve this question with a single traverse. Let `fast` and `slow` be two pointers of the linkedlist. Let fast traverse `n` steps ahead and then `fast` and `slow` move at the same time. When `fast` reach to the end, then `slow->next` is the target value we want to remove.

We may consider what if the target value we want to remove is the head of the linedlist or the end of the linkedlist.

If the target value we want to remove is the end of the linkedlist, then when we traverse fast to the end, slow is the second last element, we check if slow->next is same as fast, if so, set slow->next = NULL.

Now consider if target value is the head of linkedlist, then we need to check, after fast move n steps ahead, if it is null, then the target value must be the head of the linkedlist. Thus we simply check if `fast == NULL`, if so, return `head->next`.

If we remove any item in the middle of the linkedlist, simply set `slow->next = slow->next->next`.

## Solution
- [C++](./solution.cpp)