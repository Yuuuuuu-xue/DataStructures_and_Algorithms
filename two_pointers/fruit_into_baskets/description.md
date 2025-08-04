# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 904

## Problem
You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array `fruits` where `fruits[i]` is the type of fruit the `ith` tree produces.

You want to collect as much as fruit as possible. However, the owner has some strict rules that you must follow:
- You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold
- Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.
- Once you reach a tree with fruit that cannot fit in your baskets, you must stop

Given an integer array `fruits`, return the maximum number of fruits you can pick.

## Example:
```
Input: fruits = [1, 2, 1]
Output: 3

Input: fruits = [0, 1, 2, 2]
Output: 3
Explanation: If we pick from first tree, then we can only pick from trees [0, 1]
```

## Key Idea
This is a simple sliding window question where the window size can contain at most two different keys. Thus, we can simply use a hash map to represent the window and sum of all hash map values as the value of the map.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)