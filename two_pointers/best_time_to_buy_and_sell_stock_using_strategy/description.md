# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3652

## Problem
You are given two integer arrays `prices` and `strategy` where:
- `prices[i]` is the price of a given stock on the `ith` day
- `stategy[i]` represents a trading action on the `ith` day, where
  - `-1` indicates buying one unit of the stock
  - `0` indicates holding the stock
  - `1` indicates selling one unit of the stock

You are also given an even integer `k`, and may perform at most one modification to `strategy`. A modification consists of:
- Selectign exactly `k` consecutive elements in `strategy`
- Set the first `k / 2` elements to `0` (hold)
- Set the last `k / 2` elements to `1` (sell)

The profit is defined as the sum of `stategy[i] * prices[i]` acorss all days.

Return the maximum possible profit you can achieve.

Note: There are no constraints on budget or stock ownership, so all buy and sell operations are feasible regardless of past actions.

## Example:
```
Input: prices = [4, 2, 8], strategy = [-1, 0, 1], k = 2
Output: 10
Explanation:
- Original: [-1, 0, 1], profit = -1 * 4 + 0 * 2 + 1 * 8 = 4
- Modify [0, 1]: [0, 1, 1], profit = 0 * 4 + 1 * 2 + 1 * 8 = 10
- Modify [1, 2]: [-1, 0, 1], profit = -1 * 4 + 0 * 2 + 1 * 8 = 4
```

## Key Idea
We can use a sliding window where in the window represents the modified stategy. We start with no modified stategy then whenever we update the window, we have a sum_profit and that represents the current profit. We need update
- The first element of the window as it moves stategy 0 to original stategy
- The kth stategy as it moves from stategy 0 to stategy 1
- The last element of the window as it moves from original stategy to stategy 1

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
