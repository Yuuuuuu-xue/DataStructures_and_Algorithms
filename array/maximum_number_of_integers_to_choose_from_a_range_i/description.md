# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Question
Medium 2554

## Problem
You are given an integer array `banned` and two integers `n` and `maxSum`. You are choosing some number of integers following the below rules:
- The chosen integers have to be in the range `[1, n]`
- Each integer can be chosen at most once
- The chosen integers should not be in the array `banned`
- The sum of the chosen integers should not exceed `maxSum`

Return the maximum number of integers you can choose following the mentioned rules.

## Example
```
Input: banned = [1, 6, 5], n = 5, maxSum = 6
Output: 2
Explanation: You can choose the integers  2 and 4 or 2 and 3.
```

## Key Idea
Simply define a set and loop over banned, if the number is less than or equal to n, add it to the set.

Then loop over the i from 1 to n inclusive, if i is not in the set and curr sum does not exceed maxSum, add it and update curr sum. Otherwise, break and return the solution.

## Complexity Analysis
- Time Complexity: O(n + m)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)