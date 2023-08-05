## Binary Search Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 95

## Problem
Given an integer `n`, return all the structurally unique `BST`s, which has exactly `n` nodes of unique values from `1` to `n`. Return the answer in any order.

## Example
```
Input: n = 3
Output:
  1
   \
    3
   /
  2

  1
   \ 
    2
     \
      3

  2 
 / \ 
1   3

    3
   / 
  2
 /
1

  3
 /
1
 \
  2
```

## Key Idea
Given a node with `x`, we know that
- its left subtree node values will be `1 <= ... <= x - 1`
- its right subtree node values will be `x + 1 <= ... <= n`
Then we can start building the binary search tree from `1 <= x <= n`, and append the binary search tree to the output list.

Now we need to think about how to optimize our solution. Suppose `n = 10` and `x = 10`. Now we need to figure out the left subtrees with values `1 ... 9`. Do we need to rebuild the trees again? We can create a helper function that takes in `i` and `j` that tries to build the BST from `i` to `j`, then store its value in a hashmap (top-down dynamic programming) to optimize the final solution.

## Solution
- [C++](./solution.cpp)