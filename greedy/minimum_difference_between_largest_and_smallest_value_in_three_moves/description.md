## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Medium 1509

## Problem
You are given an integer array `nums`.

In one move, you can choose one element of `nums` and change it to any value.

Return the minimum difference between the largest and smallest value of `nums` after performing at most three moves.

## Example
```
Input: nums = [5, 3, 2, 4]
Output: 0
Explanation: Make at most 3 moves
1. In the first move, change 2 to 3
2. In the second move, change 4 to 3
3. In the third move, change 5 to 3
4. We left with [3, 3, 3, 3], the diff between smallest and largest is 0
```

## Key Idea
We can simply sort the array, then we either move the leftmost or rightmost elements. Thus, the greedy strategy is to only apply the moves at the leftmost elements or the rightmost elements.

We can apply `i` from `0` to `3` on the leftmost elements and `3 - i` on the rightmost elements and find the difference.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution:
- [Python](./solution.py)
