# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1769

## Problem
You have `n` boxes. You are given a binary string `boxes` of length `n`, where `boxes[i]` is `0` if the `ith` box is empty and `1` if it contains one ball.

In one operation, you can move one ball from a box to an adjacent box. Box `i` is adjacent to box `j` if `abs(i - j) == 1`. Note that after doing so, there may be more than one ball in some boxes.

Return an array `answer` of size `n`, where `answer[i]` is the minimum number of operations needed to move all the balls to the `ith` box.

Each `answer[i]` is calculated considering the initial state of the boxes.

## Example
```
Input: boxes = "110"
Output: [1, 1, 3]
```

## Key Idea
Note, if we have an array `left` and `right` where `left[i]` is number of operations to move all balls with index < i to `i` and `right[i]` is number of operations to move all balls with index > i to `i`. Then, `left[i] + right[i]` is the number of operations to move all balls to index `i`.

We can find `left` and `right` pretty easily using a prefix and suffix array.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)