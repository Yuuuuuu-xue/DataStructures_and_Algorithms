## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1361

## Description
You have `n` binary tree nodes numbered from `0` to `n - 1` where node `i` has two children `leftChild[i]` and `rightChild[i]`, return `true` if and only if all the given nodes from exactly one valid binary tree.

If node `i` has no left child then `leftChild[i]` will equal `-1`, similarly for the right child.

Note that the nodes have no values and that we only use the node numbers in this problem.

## Example
```
Input: n = 4, leftChild = [1, -1, 3, -1], rightChild = [2, -1, -1, -1]
Output: true
Explanation:
  0
 / \
1   2
     \
      3

Input n = 4, leftChild = [1, -1, 3, -1], rightChild = [2, 3, -1, -1]
Output: false
Explanation:
  0
 / \
1   2
 \ /
  3

Input: n = 2, leftChild = [1, 0], rightChild = [-1, -1]
Output: false
Explantion:
  0
  |
  1
  |
  0
```

## Key Idea
If a node `n` has a left child `x` and a right child `y`, then we know that `n`, `x`, and `y` belongs to the same group. When `x`'s children has a child to this group, then immediately we know that there is a cycle and thus not a tree.

If at the end, all nodes belong to one group, then we can return `true` otherwise we have a forest (i.e. multiple disjoint trees).

Therefore, we can use disjoint set to solve this problem.

We also need to handle this situation where two nodes declare on a same child, i.e.

```
  x  y
   \/
   z
```
We can simply use a hashset to keep track that every node has a parent, if we see a child and it is in a set, then we can return false.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [C++](./solution.cpp)