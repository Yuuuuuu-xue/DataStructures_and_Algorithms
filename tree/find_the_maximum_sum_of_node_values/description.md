## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 3068

## Problem
There exists an undirected tree with `n` nodes numbered `0` to `n - 1`. You are given a 0-indexed 2D integer array `edges` of length `n - 1`, where `edges[i] = [u_i, v_i]` indicates that there is an edge between nodes `u_i` and `v_i` in the tree. You are also given a positive integer `k`, and a 0-indexed array of non-negative integer `nums` of length `n`, where `nums[i]` represents the value of the node numbered `i`.

Alice wants the sum of values of tree nodes to be maximum, for which Alice can perform the following operation any number of times (including zero) on the tree:
- Choose any edge `[u, v]` connecting the nodes `u` and `v`, and update their values as follows:
  - `nums[u] = nums[u] XOR k`
  - `nums[v] = nums[v] XOR k`

## Example
```
Input: nums = [1, 2, 1], edes = [[0, 1], [0, 2]]
Output: 6
Explanation:
- Choose edge [0, 2], then nums[0] = nums[0] XOR 3 = 1 XOR 3 = 2, nums[2] XOR 3 = 1 XOR 3 = 2
- The array becomes [2, 2, 2] and thus final sum is 6

Input: nums = [7, 7, 7, 7, 7, 7], k = 3, edges = [[0, 1], [0, 2], [0, 3], [0, 4], [0, 5]]
Output: 42
Explanation: No XOR operations, the array is still [7, 7, 7, 7, 7, 7] and the sum is 6 * 7 = 42
```

## Key Idea
Note, any node val can be `nums[i]` or `nums[i] XOR k` this is because `nums[i] XOR k XOR k = nums[i]`.

Note, there will be exactly even number of nodes will be updated with `XOR` version. Since we pick up an edge and update two nodes at one time.

You are able to choose any two nodes to make the change but the number must be even. This is because the given graph is a tree. This means all the nodes must be connected with a path.

We can choose the target node to be XORed by
- add two nodes from original value to its XORed
- add two nodes from XORed to original value
- add one node to XORed and another node to original value

Thus, the problem becomes: choose any nodes such that `nums[i] XOR k > nums[i]` >= 0.

If the number of those nodes are even. We can return thesum.

If the number of those nodes are odd. Then we can either
1. Remove smallest node from the chosen node. We want to pick the smallest number
2. Add another node to the chosen node. We want to pick the largest number

We can simply ignore the given `edges`.

## Solution
- [Python](./solution.py)