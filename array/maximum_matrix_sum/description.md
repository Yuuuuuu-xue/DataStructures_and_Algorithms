# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Question
Medium 1975

## Problem
You are given an `n x n` integer `matrix`. You can do the following operation any number of times:
- Choose any two adjacent elements of `matrix` and multiply each of them by `-1`

Two eleemnts are considered adjacent if and only if they share a border.

Your goal is to maximize the summation of the matrix's elements. Return the maximum sum of the matrix's elements using the operation mentioned above.

## Example
```
Input: matrix =
[[1, 2, 3],
 [-1, -2, -3],
 [1, 2, 3]]
Output: 16
Explanation: the matrix becomes
[[1, 2, 3],
 [-1, 2, 3],
 [1, 2, 3]]
```

## Key Idea
Note, for any two negative elements, we can repeat the operation and we can convert any two negative elements to positive by keep applying the operation to its neighbor.

Thus, if we have even number of negative numbers, we can basically convert all the numbers to positive.

If we have odd number, we can simply get the smallest abs value be the only negative number and convert the rest of numbers to positive.

## Complexity Analysis
- Time Complexity: O(n ^ 2)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)