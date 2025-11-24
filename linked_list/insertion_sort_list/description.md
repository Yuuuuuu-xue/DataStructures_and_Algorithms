## Linked List
Click [here](../notes.md) to go back to the notes page.

## Problem
Given the `head` of a singly linked list, sort the list using insertion sort, and return the sorted list's head.

The steps of the insertion sort algorithm:
1. Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.
2. At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list and inserts it there.
3. It repeats until no input elements remain.

The following is a graphical example of the insertion sort algorithm. The partially sorted list (black) initially contains only the first element in the list. One element (red) is removed from the input data and inserted in-place into the sorted list with each iteration.

## Example
```
Input: 4 -> 2 -> 1 -> 3
Output: 1 -> 2 -> 3 -> 4
```

## Key Idea
A simple simulation of insertion sort.

We have a head that represents the sorted order and a head that represents the curr element in the unsorted list.

We iterate over the sorted list and insert the element into it.

## Complexity Analysis
- Runtime Complexity: O(n^2)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
