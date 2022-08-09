## LeetCode Problem
Easy 543

## Description
Given the `root` of a binary tree, return the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the `root`. The length of a path between two nodes is represented by the number of edges between them.

## Example
```
Input:
    1
   / \
  2   3
 / \
4   5

Output: 3
Explanation: 3 is the length of the path:
- 4 -> 2 -> 1 -> 3
- 5 -> 2 -> 1 -> 3
```

## Key Idea
Simply traverse the tree at the root node `curr`. Then find the longest path in its left subtree and longest path in its right subtree from the root. Then the sum of this two number - `currDepth` - 1 is the diameter of the node rooted at `curr`. We can use this number to update the final output and return the maximum value among this two values.

Note, sum of the two number - 2 * currDepth is because, suppose `curr = 2`:
```
    1
   / \
  2   3
 / \
4   5
```
The depth of 2's left subtree (4) is 2 and right subtree (5) is also 2. But it counts twice, thus we need to - 2 * currDepth. (the depth from the original root to the curr root).

## Solution
- [C++](solution.cpp)