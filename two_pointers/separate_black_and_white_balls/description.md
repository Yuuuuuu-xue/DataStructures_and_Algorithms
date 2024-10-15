## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2938

## Problem
There are `n` balls on a table, each ball has a color black or white.

You are given a 0-indexed binary string `s` of length `n`, where `1` and `0` represnts black and white balls, respsectively.

In each step, you can choose two adjacent balls and swap them.

Return the minimum number of steps to group all the black balls to the right and all the white balls to the left.

## Example:
```
Input: s = "101"
Output: 1
Explanation: We can group all the black balls to the right in the following way: 
- Swap s[0] and s[1], s = "011".
```

## Key Idea
We can have a counter keep incrementing until we see a black ball, then we need to find a next white ball and keep swapping them. To achieve that, we can simply find the last white ball in the rightmost and swap the ball between them since we can only swap two adjacent balls.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)