## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2058

## Problem
A critical point in a linked list is defined as either a local maxima or a local minima.

A node is a local maxima if the current node has a value strictly greater than the previous node and the next node.

A node is a local minima if the current node has a value strictly smaller than the previous node and the next node.

Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.

Given a linked list `head`, return an array of length 2 containing `[minDistance, maxDistance]` where `minDistance` is the minimum distance between any two distinct critcal points and `maxDistance` is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return `[-1, -1]`.

## Example
```
Input: 3 -> 1
Output: [-1, -1]

Input: 5 -> 3 -> 1 -> 2 -> 5 -> 1 -> 2
Output: [1, 3]
Explanation: there are 3 critical points: 1, 5 and 1
The distance between second and third critical point is 1 which is the minimum

The distnace between first and third critcal point is 3 which is the maximum.
```

## Key Idea
If number of nodes is less than 3, then we can return `[-1, -1]`.

Then we start traverse from second node to the second last node. For each node, if it is a critical point, we store the `prev` be the prev distance if there is already a critical point before. Then we keep track of the min and max distance between critical points.

We can use `prev` and `curr` since it's not a doubly linked list.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python Solution](./solution.py)