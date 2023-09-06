## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 725

## Description
Given the `head` of a singly linked list and an integer `k`, split the linked list into `k` consecutive linked list parts.

The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parats being null.

The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.

Return an array of the `k` parts.

## Example:
```
Input: head = 1 -> 2 -> 3, k = 5
Output: [1, 2, 3, null, null]

Input: head = 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10, k = 3
Output: [1 -> 2 -> 3 -> 4, 5 -> 6 -> 7, 8 -> 9 -> 10]
```

## Key Idea
We know that each pairs has `n / k` elements and let first `n % k` has `n / k + 1` elements and rest has `n / k` elements.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
