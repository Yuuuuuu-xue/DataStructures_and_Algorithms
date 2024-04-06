## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2049

## Problem
There is a binary tree rooted at `0` consisting of `n` nodes. The nodes are labaled from `0` to `n - 1`. You are given a 0-indexed integer array `parents` representing the tree, where `parents[i]` is the parent of node `i`. Since node `0` is the root, `parents[0] == -1`.

Each node has a score. To find the score of a node, consider if the node and the edges connected to it were removed. The tree would become one or more non-empty subttrees. The size of a subtree is the number of the nodes in it. The score of the node is the product of the sizes of all those subtrees.

Return the number of nodes that have the highest score.

## Example
```
Input: parents = [-1, 2, 0, 2, 0]
Output: 3
Explanation: given tree:
    0
   / \
  2   4
 / \
3   1

- Remove node 0 and score = 3 * 1 = 3
    2     4
   / \
  3   1

- Remove node 1 and score = 4
    0
   / \
  2   4
 /
3

- Remove node 2 and score = 1 * 1 * 2 = 2
  3  1  0
         \
          4

- Remove node 3 and score = 4
    0
   / \
  2   4
   \
    1

- Remove node 4 and score = 4
    0
   /
  2
 / \
3   1

The highest score is 4 and three nodees have the highest score.
```

## Key Idea
Suppose, for each node `i`, we know the number of nodes rooted at node `i`. Then, to find out a score of a node `i` *= child[j].num_nodes for all child `j` of node `i`. Now consider the subtree that contains the parent node of node `i`. The number of nodes equals to total_num_nodes - `node[i].num_nodes`.


Since we are given a list and not a tree structure, we can avoid recreating all the tree nodes. Let `child` be an array such that `child[i]` represents a list of nodes that is a child node of node `i`. And let `num_nodes[i]` be the number of nodes for a subtree rooted at node `i`.

Then simply compute those two values and loop all the nodes and calculate the score.

## Complexity Analaysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)