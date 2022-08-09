## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 582

## Description
You have `n` processes forming a rooted tree structure. You are given two itneger arrays `pid` and `ppid`, where `pid[i]` is the ID of the `ith` process and `ppid[i]` is the ID of the `ith` process's parent process.

Each process has only one parent process but may have multiple children processes. Only one process has `ppid[i] = 0`, which means this process has no parent process (the root of the tree).

When a process is killed, all of its children processes will also be killed.

Given an integer `kill` representing the ID of a process you want to kill, return a list of the IDs of the processes that will be killed. You may return the answer in any order.

## Example
```
Input: pid = [1, 3, 10, 5], ppid = [3, 0, 5, 3], kill = 5
  3
 / \
1   5
   /
  10
Output: [5, 10]
```

## Key Idea
First of all, we need to build a tree structure that maps parent id to its' children id. Then we simply perform a search for given `kill`, we kill that process, find it's children and kill it. Continue until we cannot find a parent of a given child id (leaf node).

## Solution
- [C++](solution.cpp)