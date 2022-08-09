## LeetCode Problem
Easy 100

## Description
Given the roots of two binary trees `p` and `q`, write a function to check if they are the same or not. Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

## Example
```
Input:
p:
    1
   / \
  2   3
q:
    1
   / \
  2   3
Output: true

Input:
p:
    1
   /
  2
q:
    1
     \ 
      2
Output: false
```

## Key Idea
Simply traverse at the same time. Let `curr1` and `curr2` be nodes of `p1` and `p2` rooted at `curr1` and `curr2`. Return false if:
- `curr1` is null and `curr2` is not null
- `curr1` is not null and `curr2` is null
- `curr1` and `curr2` both not null but different value

Otherwise continue to traverse and return true at the end.

## Solution
- [C++](solution.cpp)