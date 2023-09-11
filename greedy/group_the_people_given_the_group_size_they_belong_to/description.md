## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1282

## Problem
There are `n` people that are split into some unknown number of groups. Each person is labeled with a unique ID from `0` to `n - 1`.

You are given  an integer array `groupSizes`, where `groupSizes[i]` is the size of the group that person `i` is in. For example, if `groupSizes[1] = 3`, then person `1` must be in a group of size `3`.

Return a list of groups such that each person `i` is in a group of size `groupSizes[i]`.

Each person should appear in exactly one group, and every person must be in a group. If there are multiple answers, return any of them. It is guaranteed that there will be at least one valid solution for the given input.

## Example:
```
Input: groupSizes = [3, 3, 3, 3, 3, 1, 3]
Output: [[5], [0, 1, 2], [3, 4, 6]]
Explanation:
- The first group is [5] since person 5 has to be in a group of size 5
- The second group is [0, 1, 2] since person 0, 1, and 2 have to be in a group of size 3
- The third group is [3, 4, 6] since person 3, 4, and 6 have to be in a group of size 3 
```

## General Idea:
Let's solve this problem via Greedy algorithm. Our greedy strategy is that if person `i` has to be in a group of size `k`, then put it in a group of size `k` and all other person that has to belong to the group of size `k`. Once we reach to the size `k`, then we find out a new group. If next person has to be a size `k`, we start with a new group.

Thus, we can use a `m` that maps `k` to a list of person. When we see a person `i` that has to be in a group of size `k`, we push `i` to `m[k]`. Once `m[k].size() == k`, then we push the group to output and set `m[k] = []`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
