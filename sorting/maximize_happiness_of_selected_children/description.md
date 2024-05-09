## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3075

## Problem
You are given an array `happiness` of length `n`, and a positive integer `k`. 

There are `n` children standing in a queue, where the `ith` child has happiness value `happiness[i]`. You want to select `k` children from these `n` children in `k` turns.

In each turn, when you select a child, the happiness value of all the children that have not been selected till now decreased by `1`. Note that the happiness value cannot become negative and gets decremented only if it is positive.

Return the maximum sum of the happiness values of the selected children you can achieve by selecting `k` children.

## Example
```
Input: happiness = [1, 2, 3], k = 2
Output: 4
Explanation: Pick 2 children:
1. Pick children with happiness 3, decrement and happiness left = [0, 1]
2. Pick children with happiness 1
3. Total happiness equals to 4
```

## Key Idea
Simply sort the happiness from largest to smallest. Then let `i` be the counter from `i = 0` to `k - 1`, and increment the happiness by `happiness - i`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
