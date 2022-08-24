## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 310

## Description
A tree is an undirected graph in which any two vertices are connected by exactly one path. In other words, any connected graph without simple cycles is a tree. Given a tree of `n` nodes labelled from `0` to `n - 1`, and an array of `n - 1 edges` where `edges[i] = [a_i, b_i]` indicates that there is an undirected edge between the two nodes `a_i` and `b_i` in the tree, you can choose any node of the tree as the root. When you select a node `x` as the root, the result tree has height `h`. Among all possible rooted trees, those with minimum height (i.e. `min(h)`) are called minimum height trees (MHTs).

Return a list of all MHTs' root labels. You can return the answer in any order.

The height of a rooted tree is the number of edges on the longest downward path between the root and a leaf.

## Example:
```
Input: n = 4, edges = [[1, 0], [1, 2], [1, 3]]
Output: [1]
Explanation:
possible trees:
  0       1        2      3
  |     / | \      |      |
  1    0  2  3     1      1
 / \              / \    / \
2   3            0   3  0   2

Input: n = 6, edges = [[3, 0], [3, 1], [3, 2], [3, 4], [5, 4]]
Output: [3, 4]
Explanation: MHTs:
      3           4
   / / \ \       / \
  0 1   2 4     5   3
          |        /|\
          5       0 1 2
```

## Key Idea
To have a minimum height tree, we know that leaf node will not be the root of the minimum height tree because if we have a leaf node to be a minimum height tree, then the tree with the parent node of that leaf node as a root will produce a tree with a smaller height and thus raise the required contradiction. Thus, the key idea of this problem is that we will trim all the leaves out. Then some non-leaf nodes will become new leaves. We will repeat the process until last layer of leaves. Then it will be the final solution.

Notice it is exactly the same process of Kahn's Algorithm of the topological sort.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)