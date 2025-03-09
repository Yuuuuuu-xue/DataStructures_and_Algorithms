# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3208

## Problem
There is a circle of red and blue tiles. You are given an array of integers `colors` and an integer `k`. The color of tiles `i` is represented by `colors[i]`:
- `colors[i] == 0` means that tile `i` is red
- `colors[i] == 1` means that tile `i` is blue

An alternating group is every `k` contiguous tiles in the circle with alternating colors (each tile in the group except the first and last one has a different color from its left and right tiles).

Return the nuber of alternating groups.

Note that since `colors` represents a circle, the first and last tiles are considered to be the next to each other.

## Example:
```
Input: colors = [0, 1, 0, 1, 0], k = 3
Output: 3
Explanation:
The group at index:
- [0, 1, 2]
- [1, 2, 3]
- [2, 3, 4]
This group does not work: [3, 4, 1] which has value [1, 0, 0]
```

## Key Idea
We can use a two pointer to track the colors in ths circle.

We will have outer loop index `i` that represents the starting point at each index. Then push all next elements into the window until the window with length `k`. If this window has a case where at index `j`, `colors[j]` and `colors[j + 1]` have the same value, we can set index `i` to `j + 1` if `j + 1` > `i`. This is because all index between `i` and `j + 1` will have this case and is not a valid alternating group.

## Complexity Analysis
- Runtime Complexity: O(n * k)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
