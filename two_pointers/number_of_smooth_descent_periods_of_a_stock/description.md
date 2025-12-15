# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2110

## Problem
You are given an integer array `prices` representing the daily price history of a stock, where `prices[i]` is the stock price on the `ith` day.

A smooth descent period of a stock consists of one or more contiguous days such that the price on each day is lower than the price on the preceding day by exactly `1`. The first day of the period is exempted fromt his rule.

Return the number of smooth descent periods.

## Example
```
Input: prices [3, 2, 1, 4]
Output: 7
Explanation: There are 7 smooth descent periods:
- [3], [2], [1], [4], [3, 2], [2, 1], [3, 2, 1]
```

## Key Idea
We can use a two pointers to track smooth price within the window and keep update the counter.

Another possible way we can solve this: we track the number of contiuous smooth prices before i. Then at index `i`, if `prices[i] == prices[i] - 1`, then, we can update the counter and continue. Otherwise, reset the counter.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)