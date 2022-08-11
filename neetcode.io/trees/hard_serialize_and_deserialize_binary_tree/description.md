## LeetCode Problem
Hard 297

## Description
Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment. Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

## Example
```
Input:
    1
   / \
  2   3
     / \
    4   5
Output:
    1
   / \ 
  2   3
     / \
    4   5
```

## Key Idea
We will use the LeetCode Binary Serilazation strategy to solve this problem.
Suppose we have a tree
```
      5
     / \
    4   7
   /   / 
  3   2
 /   / 
-1  9
```
Then we can serialize it into `[5, 4, 7, 3, null, 2, null, -1, null,9]`.
Notice it traverse the tree level by level. For any tree, `curr`, the next two values are the root of the left subtree and right subtree. And repeat the same process. We will use BFS to serailize and deseralize since it serailize the tree level by level.

## Solution
- [C++](solution.cpp)