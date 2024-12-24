## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 3203

## Problem
There exist two undirected trees with `n` and `m` nodes, numbered from `0` to `n - 1` and from `0` to `m - 1`, respectively. You are given two 2D integer arrays `edges1` and `edges2` of lengths `n - 1` and `m - 1`, respectively, where `edges1[i] = [a_i, b_i]` indicates that there is an edge between nodes `a_i` and `b_i` in the first tree and `edges2[i] = [u_i, v_i]` indicates that there is an edge between nodes `u_i` and `v_i` in the second tree.

You must connect one node from the first tree with another node from the second tree with an edge.

Return the minimum possible diameter of the resulting tree.

The diameter of a tree is the length of the longest path between any two nodes in the tree.
 
## Example
```
Input: edges1 = [[0, 1], [0, 2], [0, 3]], edges2 = [[0, 1]]
Output: 3
Explanation:
-  Tree 1:
        0
     /  |  \
    3   2   1
-  Tree 2:
        0
         \ 
          1
```

## Key Idea
Note, the minimum possible diameter of the resulting tree is that we can connect a middle node of minimum diameter of tree 1 to middle node of minimum diameter of tree 2.

It is possible that one tree is smaller such that the longest path is still within tree1 or tree2.

Thus, the output will be the max of
- minimum possible diameter of tree1 = longest path of tree1
- minimum possible diameter of tree2 = longest path of tree2
- ceil(longest path of tree1 / 2) + ceil(longest path of tree 2 / 2) + 1 edge to connect them

Now, the problem is that how do we find the longest path of a given tree.

We can simply start with any node and find the node that is furthest away. This node must be one of the node that is longest path between any two nodes.

Then we can perform BFS again to start with this node and find the distance from this node to any other node which will give us the maximum distance between any two nodes.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(n + m)

## Solution:
- [Python](./solution.py)