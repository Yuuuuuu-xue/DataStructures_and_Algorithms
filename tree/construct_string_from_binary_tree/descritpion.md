## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 606

## Description
Given the `root` of a binary tree, construct a string consisting of parenthesis and integers from a binary tree with the preorder traversal way, and return it.

Omit all the empty parenthesis pairs that do not affect the one-to-one mapping relationship between string and the orignal binary tree.

## Example
```
Input:
    1
   / \
  2   3
 /
4
Output: "1(2(4))(3)"
Explanation: Originally, it needs to be "1(2(4)())(3()()) but can omit all the uncessary empty parenthesis pairs.

Input:
  1
 / \
2   3
 \
  4
Output: "1(2()(4))(3)"
Explanation: Note, cannot omit the first parenthesis pair to break the one-to-one mapping relationship
```

## Key Idea
Return value(left)(right)

There is 4 steps:
1. both left and right are not empty, then `value(left)(right)`
2. left is not empty and right is empty, then `value(left)`
3. left is empty and right is not empty, then `value()(right)`
4. left and right are both empty, then `value`

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
