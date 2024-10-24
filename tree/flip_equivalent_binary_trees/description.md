## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 951

## Problem
For a binary tree T, we can define a flip operation as follows: choose any node, and swap the left and right child subtrees.

A binary tree X is flip equilvalent to a binary tree Y if and only if we can make X equal to Y after some number of flip operations.

Given the roots of two binary trees `root1` and `root2`, return `true` if the two trees are flip equilvalent or `false` otherwise.

## Example
```
Input:
root1:
        1
       / \
      2   3
     / \  / 
    4   5 6
       / \
      7   8
root2: 
        1
       / \
      3   2
      \  / \
      6 4   5
           / \
          8   7
Output: true
Explanation: we flipped at nodes with values 1, 3, and 5.
```

## Key Idea
We can simply solve this problem with recursion.

We will traverse two roots at the same time.

If they don't have the same value, we can return `false` immediately.

If they have the same value, and if they can swap:
- only one node
- two nodes and value are the same in left and right
- two nodes and value are reversed (left node is right node)

If we swap, then we recursively check curr1.left and curr2.right + curr2.right and curr2.left.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(h)

## Solution
- [Python](./solution.py)