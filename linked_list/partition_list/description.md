## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 86

## Description
Given the `head` of a linked list and a value `x`, partition is such that all nodes less than `x` come before nodes greater than or equal to `x`. You should preserve the original relative order of the nodes in each of the two partitions.

## Example:
```
Input: 1 -> 4 -> 3 -> 2 -> 5 -> 2, x = 3
Output: 1 -> 2 -> 2 -> 4 -> 3 -> 5

Input: 2 -> 1, x = 2
Output: 1 -> 2
```

## Key Idea
We can define the following 4 varaibles: `smallHead`, `smallEnd`, `largeHead`, and `largeEnd`. `smallHead` and `smallEnd` will keep a linked list with the value `<` x. `largeHead` and `largeEnd` will keep a linked list with the value `>= x`. We can iterate over the linked list, construct two linked list, and join them at the end.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)