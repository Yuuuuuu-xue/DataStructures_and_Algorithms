## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Hard 1028

## Problem
We run a preorder depth-first search (DFS) on the `root` of a binary tree.

At each node in this traversal, we output `D` dashes (where `D` is the depth of this node), then we output the value of this node. If the depth of a node is `D`, the depth of its immediate child is `D + 1`. The depth of the `root` node is `0`.

If a node has only one child, that child is guarnateed to be the left child.

Given the output `traversal` of this traversal, recover the tree and return its `root`.

## Example
```
Input: traversal = "1-2--3--4-5--6--7"
Output:
        1
       / \
      2   5
     / \  / \
    3  4  6  7
```

## Key Idea
First of all, we can start convert the string into a tuple (value, number of dashes). This way, we don't need to deal with dashes for the next iteration.

Then since we traverse the node in preorder, we can use a stack to solve this problem where we push tuple into a stack. If it's a child of the node, we can assign as its child to the stack and push it to the stack. We start pop a node from stack when number of dashes is not we are looking for or the node already has two child. Keep pop, we can find the corresponding parent node.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)