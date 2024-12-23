## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2471

## Problem
You are given the `root` of a binary tree with unique values.

In one operation, you can choose any two nodes at the same level and swap their values.

Return the minimum number of operations needed to make the values at each level sorted in a strictly increasing order.

The level of a node is the number of edges along the path between it and the root node.

## Example
```
Input: root =
        1
       / \
      4   3
    / \   / \
  7   6  8   5
        /   / 
       9   10
Output: 3
Explanation:
- Swap 4 and 3
- Swap 7 and 5
- Swap 8 and 7
```

## Key Idea
We can use a BFS to iterate over the tree level by level.

Then we have a list of node's value at each level.

We need to do next is to find the number of operations that we need to swap.

We can simply copy the list and sort it.

Then we can compare each element in the list and sorted list, if they are different, we swap them.

To swap it in constant time, we can also build a map that maps the element to its index. We can do it since we assume all values are unique.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n lg n)

## Solution
- [Python](./solution.py)
