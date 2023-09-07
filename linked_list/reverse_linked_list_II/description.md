## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 92

## Description
Given the `head` of a singly linked list and two integers `left` and `right` where `left <= right`, reverse the nodes of the list from position `left` to position `right`, and return the reversed list.

## Example:
```
Input: 1 -> 2 -> 3 -> 4 -> 5, left = 2, right = 4 
Output: 1 -> 4 -> 3 -> 2 -> 5
```

## Key Idea
If `left == right`, then simply just return the `head` since there is no need to reverse. Then let `prevLeft` and `prevRight` be the previous node before `left` and `right`. We can do it by simply traverse the linked list. `prevLeft` maybe `null` but `prevRight` must not be null because it's the `right` and `left != right`, so there is at least one node before `right`. We can add `dummy` node before `head` to guarantee `prevLeft`. Then we can simply reverse the list `prevLeft->next` to `prevRight->next`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)