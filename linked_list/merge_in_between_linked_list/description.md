## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1669

## Problem
You are given two linked list: `list1` and `list2` of sizes `n` and `m` respectively. Remove `list1`'s nodes from the `ath` node to the `bth` node, and put `list2` in their place.

## Example
Input: list1 = [10,1,13,6,9,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
Output: [10,1,13,1000000,1000001,1000002,5]

## Key Idea
Simply let `start` be the node before `ath` node and `end` be the node after `bth` node. Then simply connect them with list2.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
