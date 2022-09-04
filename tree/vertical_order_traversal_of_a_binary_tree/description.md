## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 987

## Description
Given the `root` of a binary tree, calculate the vertical order traversal of the binary tree.

For each node at position `(row, col)`, its left and right children will be at position `(row + 1, col - 1)` and `(row + 1, col + 1)` respectively. The root of the tree is at `(0, 0)`.

The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values. Return the vertical order traversal of the binary tree.

## Example
```
Input:
  3
 / \
9  20
   / \
  15  7
Output: [[9], [3, 15], [20], [7]]

Input:
    1
   / \
  2   3
 / \ / \
4  5 6  7
Output: [[4], [2], [1, 5, 6], [3], [7]]

Input:
    1
   / \
  2   3
 / \ / \
4  6 5  7
Output: [[4], [2], [1, 5, 6], [3], [7]]
```

## Key Idea
This problem is similar to [this](../binary_tree_vertical_order_traversal/description.md) problem but with a minor difference that we need to sort the nodes by their values if they lie on the same row and same column.

Thus, we will first run a BFS to get the nodes. Where if we move the left node, update the `currColumn = currColumn - 1` and move to the right node, update the `currColumn = currColumn + 1`.

When we store the nodes for each column, we also store their `row` value. At the end, for each column, we will retrieve a list of tuples `(currRow, currValue)`. We will sort this list by `currRow`, if same then sort by its `currValue`.

## Complexity Analysis
- Runtime Complexity: O(n) + O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)